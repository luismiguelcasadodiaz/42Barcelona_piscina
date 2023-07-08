#!/bin/sh
find . \( -type f -or -type d \) 2>/dev/null| wc -l | tr -d ' '
