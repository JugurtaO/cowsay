#!/bin/sh

#Un nombre est dit premier si et seulement si il admet exactement deux diviseurs
 #Pour cela on va diviser le nombre  sur tous les entiers inférieurs à la 
 #partie entière de sa racine carrée. Si le nombre admet un diviseur alors il n'est 
 #pas premier sinon il est premier.


i=2
while [ $i -lt $1 ] 
do
    j=1
    cpt=0    #compteur comme drapeau 
    while [ $j -le $( expr $i / 2 ) ]
    do
        if [ $( expr $i % $j ) -eq 0 ]
        then
            cpt=$( expr $cpt + 1 )
        fi
        j=$( expr $j + 1 )
    done 
    if  [ $cpt -eq 1 ]        #si le drapeau est à zéro alors i n'a pas de diviseurs , il est donc premier
    then 
        cowsay $i    #la vache prononce le nombre premier i
    fi
    i=$( expr $i + 1 )
done


 

  

    
 