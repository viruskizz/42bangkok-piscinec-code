#!/bin/bash
RED="\033[1;31m"
RESET="\033[m"
main=test.c
filename="assets/fun_board.txt"

if [[ -z $1 && -z $2 && -z $3 ]]
then
	width=20
	height=20
	dens=4
else
	width=$1
	height=$2
	dens=$3
fi

echo "${RED}Generate assets/fun_board.txt${RESET}"
if [[ -z $4 && -z $5 && -z $6 ]]
then
	echo "normal map"
	perl generate_fun_board.pl $width $height $dens > $filename 
else
	empty=$4
	obs=$5
	full=$6
	perl generate_fun_board.pl $width $height $dens $empty $obs $full > $filename 
fi
cat $filename

echo "";

gcc -Wall -Wextra -Werror $main services/*.c services/utilities/*.c -I./headers -I./types -o runner.out

if [[ -f "runner.out" ]]
then
	echo -e "\033[1;32;47m=== Result ===\033[m";
	./runner.out
	#Clean
	rm runner.out
fi
