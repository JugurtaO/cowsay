#include <stdio.h>
#include <string.h>
//script qui modifie l'etat d'affichage de la bouche ou de la longue selon l'option choisie (-e pour les yeux et t pour la longue)
//pour l'exécution on passe d'abord l'option comme premier argument puis la chaine de carctères
void affiche_vache(char chaine[2],char option[2]) {
    if ((strcmp(option,"-e")== 0))  //on modifie les yeux
         printf(" %s %s %s %s %s %s %s"," \'^__ ^\n","\\(",chaine,")\\ _______ \n", " \'(__)\\         ) \\/\\ \n","     \'|| - - - -w |\n" , "     \'||          ||\n "     );
                                     
    else   //Sinon on modifie toujours la longue 
         printf(" %s %s %s %s %s %s %s","\'^__ ^\n","\\(00)\\ _______ \n","\'(__)\\         ) \\/\\ \n","\'",chaine,"|| - - - -w |\n" , "    \'||          ||\n "     );

                        
                                              



}

int main (int argc, char *argv[]) {
 //lors du passage des paramètre pour le fichier new_cow ,on considère que le premier 
 //argument est l'option , le deuxième c'est la chaine de caractères.
    affiche_vache(argv[2],argv[1]); 


    return 0;
}