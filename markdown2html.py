#!/usr/bin/python3

"""
A script that takes two arguments: input Markdown file and output HTML file.
Usage: ./markdown2html.py <input_file> <output_file>
"""

import sys
import os


def parse_headings(line):
    heading_level = 0
    while line.startswith("#"):
        heading_level += 1
        line = line[1:]

    if 0 < heading_level <= 6:
        return f"<h{heading_level}>{line.strip()}</h{heading_level}>\n"
    return line


def parse_unordered_list(lines):
    html_list = ["<ul>"]
    for line in lines:
        if line.startswith("- "):
            html_list.append(f"<li>{line[2:].strip()}</li>")
        else:
            break
    html_list.append("</ul>")
    return "\n".join(html_list), len(html_list) - 2


def parse_ordered_list(lines):
    html_list = ["<ol>"]
    for line in lines:
        if line.startswith("* "):
            html_list.append(f"<li>{line[2:].strip()}</li>")
        else:
            break
    html_list.append("</ol>")
    return "\n".join(html_list), len(html_list) - 2


if __name__ == "__main__":
    if len(sys.argv) < 3:
        usage = "Usage: ./markdown2html.py README.md README.html"
        print(usage, file=sys.stderr)
        sys.exit(1)

    input_file, output_file = sys.argv[1], sys.argv[2]

    if not os.path.isfile(input_file):
        print(f"Missing {input_file}", file=sys.stderr)
        sys.exit(1)

    with open(input_file, "r") as md_file, open(output_file, "w") as html_file:
        lines = md_file.readlines()
        i = 0
        while i < len(lines):
            line = lines[i].strip()
            if line.startswith("- "):
                ul_html, items_count = parse_unordered_list(lines[i:])
                html_file.write(ul_html + "\n")
                i += items_count
            elif line.startswith("* "):
                ol_html, items_count = parse_ordered_list(lines[i:])
                html_file.write(ol_html + "\n")
                i += items_count
            else:
                html_line = parse_headings(line)
                html_file.write(html_line)
            i += 1

    sys.exit(0)
