#!/bin/sh

#*********La vache calcule et prononce la somme des carrés parfaits inférieurs à la borne n*********************
somme=0
i=1
while [ $i -le $1 ]
do
    j=1
    cpt=0
    while [ $j -le $i ]
    do
        if [ $( expr $j \* $j ) -eq $i ]     #On vérifie s'il éxiste un nimbre j tel que j²=i
        then
            cpt=$( expr $cpt + 1 )
        fi
        j=$( expr $j + 1 )
    done
    if [ $cpt -ne 0 ]
    then  
        somme=$( expr $somme + $i )
    fi
        

    i=$( expr $i + 1 )
done
cowsay -g $somme

