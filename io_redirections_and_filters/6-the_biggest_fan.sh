#!/bin/bash
cut -f 1 | sort | uniq -c | sort -nr | tail -n +2 | tr -s ' ' | cut -d ' ' -f 3 | head -n 11

