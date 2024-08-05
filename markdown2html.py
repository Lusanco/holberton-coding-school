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
        return f"<h{heading_level}>{line.strip()}</h{heading_level}>"
    return line


def parse_unordered_list(lines):
    html_list = ["<ul>"]
    count = 0
    for line in lines:
        if line.strip().startswith("- "):
            html_list.append(f"<li>{line.strip()[2:]}</li>")
            count += 1
        else:
            break
    html_list.append("</ul>")
    return "\n".join(html_list), count


def parse_ordered_list(lines):
    html_list = ["<ol>"]
    count = 0
    for line in lines:
        if line.strip().startswith("* "):
            html_list.append(f"<li>{line.strip()[2:]}</li>")
            count += 1
        else:
            break
    html_list.append("</ol>")
    return "\n".join(html_list), count


def parse_paragraph(lines):
    html_paragraph = ["<p>"]
    count = 0
    for line in lines:
        if line.strip():
            if count > 0:
                html_paragraph.append("<br />")
            html_paragraph.append(line.strip())
            count += 1
        else:
            break
    html_paragraph.append("</p>")
    return "\n".join(html_paragraph), count


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
        first_line_written = False

        while i < len(lines):
            line = lines[i].strip()
            if line.startswith("#"):
                html_line = parse_headings(line)
                if first_line_written:
                    html_file.write("\n")
                html_file.write(html_line)
                first_line_written = True
                i += 1
            elif line.startswith("- "):
                ul_html, items_count = parse_unordered_list(lines[i:])
                if first_line_written:
                    html_file.write("\n")
                html_file.write(ul_html)
                first_line_written = True
                i += items_count
            elif line.startswith("* "):
                ol_html, items_count = parse_ordered_list(lines[i:])
                if first_line_written:
                    html_file.write("\n")
                html_file.write(ol_html)
                first_line_written = True
                i += items_count
            elif line:
                p_html, lines_count = parse_paragraph(lines[i:])
                if first_line_written:
                    html_file.write("\n")
                html_file.write(p_html)
                first_line_written = True
                i += lines_count
            else:
                i += 1

        # Ensure there is a newline at the end of the file
        html_file.write("\n")

    sys.exit(0)
