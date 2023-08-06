#!/bin/sh
i=1
while [ $i -lt $1 ]     #On va jusqu'à n-1 et on affiche la vache tirant sa longue pour n²
do
    cowsay $( expr $i \* $i )
    sleep 1
    i=$( expr $i + 1 )
done
cowsay -s $( expr $1 \* $1)
