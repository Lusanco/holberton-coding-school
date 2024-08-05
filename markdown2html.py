#!/usr/bin/python3

"""
A script that takes two arguments: input Markdown file and output HTML file.
Usage: ./markdown2html.py <input_file> <output_file>
"""

import sys
import os


def parse_headings(line):
    """Parse Markdown headings and return corresponding HTML."""
    heading_level = 0
    while line.startswith("#"):
        heading_level += 1
        line = line[1:]

    if 0 < heading_level <= 6:
        return f"<h{heading_level}>{line.strip()}</h{heading_level}>\n"
    return line


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
        for line in md_file:
            html_line = parse_headings(line)
            html_file.write(html_line)

    sys.exit(0)
