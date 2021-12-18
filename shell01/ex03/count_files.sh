#!/bin/sh
find . | wc -l | sed 's/^[[:space:]]*//g'
