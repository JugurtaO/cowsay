#!/bin/sh
#La suite de fibonacci est définie par récurrence comme suit:
           # U0=1
           # U1=1
           # U(n+2)=U(n+1)+Un 

p=1     #p comme terme précédent
c=1     #c comme terme courant
cowsay $p
cowsay $c

    #on a déja affiché deux termes de la suite alors 
            #on affichera que les  n-2 autres qui restent"""
i=1
while [ $i -lt $( expr $1 - 2 ) ]
do
    s=$( expr $p + $c )         #s comme terme suivant 
    cowsay $s
    p=$c
    c=$s
    i=$( expr $i + 1 )
done

cowsay -s $( expr $p + $c )   #La vache prononce le n-ième terme de la suite en tirant sa longue

    