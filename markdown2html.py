#!/usr/bin/python3

"""
A script that takes two arguments: input Markdown file and output HTML file.
Usage: ./markdown2html.py <input_file> <output_file>
"""

import sys
import os

if __name__ == "__main__":

    if len(sys.argv) < 3:
        usage = "Usage: ./markdown2html.py README.md README.html"
        print(usage, file=sys.stderr)
        sys.exit(1)

    input_file, output_file = sys.argv[1], sys.argv[2]

    if not os.path.isfile(input_file):
        print(f"Missing {input_file}", file=sys.stderr)
        sys.exit(1)

    sys.exit(0)
