#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char lire_caractere (FILE *f) {
    char c;
    fscanf(f, "%c", &c);
    return c;
}
//Une fonction qui affiche la vache prononçant le caractère lu
void affiche_vache (char car) {
      printf(" %s %s %s %s %c %s %s","        \\ \'^__ ^\n","          \\(00)\\ _______ \n","          \'(__)\\         ) \\/\\ \n","          \'",          car,"|| - - - -w |\n" , "              \'||          ||\n "     );
}

//Une fonction qui affiche le mot complet
void affiche_mot (char *chaine){
    printf("------------\n");
    printf("< %s >\n", chaine);
    printf("------------\n");
    
}

int main (int argc, char* argv[]){
    FILE *f;
    char c;
    char mot[50]; 
    //tests sur le nombre d'arguments passés en paramètre 
    //Possibilité de lecture depuis l'entrée standard
    if (argc==1)
        f = stdin;
    else
        f = fopen(argv[1], "r");

    if (f==NULL){   // test sur la possibilité d'ouverture du fichier 
        perror(argv[1]); 
        return 1;
    }
    int i = 0;
    c = lire_caractere(f);
    while(!feof(f)){
        if(c!=' '){
            mot[i] = c;
            affiche_mot(mot);
            affiche_vache(c);
        }
        else{
        /*quand il s'agit d'un espace j'écrase le contenu de ma variable auxiliaire mot avec des espaces,
        la chaine d'espaces est supposée plus grande pour éviter de remplacer seulement quelques lettres
        du mot si le mot est de taille inférieure à celle du précédent*/
            
            strcpy(mot, "                          ");
            i = 0;  //je remets mon indexeur à 0 pour pouvoir lire un nouveau mot 
        }

        i++;
        c = lire_caractere(f);
    }

    return 0;
}