#!/bin/sh

# (C) 2011 - Jefferson Campos - foguinho [DOT] peruca [AT] gmail [DOT] com - http://ufscar.awknet.org
# This program is free software under terms of GPLv3 or higher.
# This program get the name of all subjects.

# commands:
# cat subjects_math.txt | grep -v Disciplina | grep -v Requisito | grep -v  OU
# cat subjects_math.txt | awk '{print NF}' | awk '{print bash - 7}'


FIELDS=field.dat

for i in $(cat $FIELDS)
do
	echo $i
	
done
