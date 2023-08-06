#include <stdio.h>
 void affiche_vache(char chaine[]) {
    printf(" %s %s %s %s %s %s %s"," \'^__ ^\n"," \\(oo)\\ _______ \n", " \'(__)\\         )",chaine, "\n","     \'|| - - - -w |\n" , "     \'||          ||\n "     );    }





//programme qui modifie la taille de la queue de la vache selon l'entier saisi au clavier
//Si on ne passe pas d'arguments la vache ne sera pas contente et on le verra dans ses yeux
int main(int argc, char *argv[]){
    int L;
    char Q[100];
    Q[0] = '\\';
    Q[1]='\\';
    Q[2] = '/';
    Q[3]='\\';
    Q[4]='\\';
    

    if(argc==2) {
        sscanf(argv[1], "%d", &L);
        for (int i = 5; i <= L+5;i++){
            if (i % 2 !=0)
                Q[i] = '/';
            else 
                Q[i] = '\\';

        }
        affiche_vache(Q);
    }
    else
         printf(" %s %s  %s %s  %s"," \'^__ ^\n","  \\(--)\\ _______ \n", " \'(__)\\         ) \\/\\ \n","     \'|| - - - -w |\n" , "     \'||          ||\n "     );

    return 0;
}

