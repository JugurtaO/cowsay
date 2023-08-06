#!/bin/sh
#METHODE 1
# if [ $1 = *+* ]          #On vérifie si l'opérateur + est dans la chaine de caractères 
# then 
#     var1=` echo $1 | cut -d "+" -f 1 ) `      #On récupère les opérandes avec la commande cut
#     var2=` echo $1 | cut -d "+" -f 2 `         #Avec délimiteur l'opérateur de l'expression (ici c'est +)
#     cowsay -e $( expr $var1 + $var2 ) $1


# elif [ $1=*[*]* ]        #On vérifie si l'opérateur * est dans la chaine de caractères 
# then
#     var1=` echo $1 |  cut -d "*" -f 1 `
#     var2=` echo $1 |  cut -d "*" -f 2 `
#     cowsay -e $( expr $var1 \* $var2 ) $1
# elif [ $1=*[-]* ]        #On vérifie si l'opérateur - est dans la chaine de caractères 
# then    
#     var1=` echo $1 |  cut -d "-" -f 1 `
#     var2=` echo $1 |  cut -d "-" -f 2 `
#     cowsay -e $( expr $var1 - $var2 ) $1
# else
#     var1=` echo $1 |  cut -d "/" -f 1 `
#     var2=` echo $1 |  cut -d "/" -f 2 `
#     cowsay -e $( expr $var1 / $var2 ) $1
# fi


#METHODE 2
t=$(($1))
cowsay -e $t $1








