#!/bin/sh
cat /etc/passwd | \
 grep -e '^#' -v | \
 awk 'NR%2==0'| \
 sed -e "s/[:*].*$/ /" | \
 rev | \
 sort -r | \
 sed -n "$FT_LINE1,$FT_LINE2 p" | \
 tr '\n' ', ' | \
 sed -e "s/^, //" | \
 sed -e "s/^ //" | \
 sed -e "s/,$/./" |
 tr -d '\n'
