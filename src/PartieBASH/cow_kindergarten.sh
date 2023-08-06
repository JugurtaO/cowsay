#!/bin/sh
i=1
while [ $i -lt 10 ]          #On va jusqu'à 9 et on affiche la vache tirant sa longue pour 10
do
    cowsay $i
    sleep 1
    i=$( expr $i + 1 )     #incrémentation de l'indice i
done
cowsay -s 10