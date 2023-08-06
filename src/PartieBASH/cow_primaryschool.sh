#!/bin/sh
i=1
while [ $i -lt $1 ]              #On va jusqu'à n-1 et on affiche la vache tirant sa longue pour n
do
    cowsay $i
    sleep 1      #créer une pause de 1 seconde 
    i=$( expr $i + 1 )
done
cowsay -s $1