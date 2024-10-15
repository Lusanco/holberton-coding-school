#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <log_file>"
    exit 1
fi

log_file=$1

# Extract hosts and count occurrences
cut -f 1 "$log_file" | tail -n +2 | sort | uniq -c | sort -nr | head -n 11 | while read -r count host; do
    echo "$host"
done
