#!/bin/bash
#
# lab5.sh
# Aidan Garske
# CSC 60 fall 2025
# 9/27/25

# Print first param
echo "$1"

# Array of fruits
fruits=("apple" "orange" "fig" "cherry")

# Loop through fruits and print with leading "== " but skip "fig"
for fruit in "${fruits[@]}"; do
    if [ "$fruit" != "fig" ]; then
        echo "== $fruit"
    fi
done

exit 4
