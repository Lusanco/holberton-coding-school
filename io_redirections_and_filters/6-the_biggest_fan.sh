#!/bin/bash

declare -A ip_count

while IFS= read -r line; do
    ip_address=$(echo "$line" | awk '{print $1}')
    ((ip_count["$ip_address"]++))
done < <(grep -v -E "^$|^#" nasa_19950801.tsv)

max_count=0
max_ip_address=""

for ip_address in "${!ip_count[@]}"; do
    count="${ip_count["$ip_address"]}"
    if (( count > max_count )); then
        max_count="$count"
        max_ip_address="$ip_address"
    fi
done

echo "$max_ip_address"
