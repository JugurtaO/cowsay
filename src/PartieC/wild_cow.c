#include <stdio.h>
#include <unistd.h>
void affiche_vache(char chaine[]){
    printf(" %s %s %s %s %s %s %s"," \'^__ ^\n","\\(",chaine,")\\ _______ \n", " \'(__)\\         ) \\/\\ \n","     \'|| - - - -w |\n" , "     \'||          ||\n "     );
}
void update (){
     printf ("\033[H\033[J") ;      
}
void gotoxy (x , y ) { 
    printf ("\033[%d;%dH",x,y) ;
}
//Animation
//Programme qui change l'état des yeux et l'état de la longue de la vache selon la série des chaines 
//de caractères passées en arguments
//PS: On compile d'abord le script puis in fait clear et ensuite on exécute le fichier a.out

int main(int argc, char* argv[]){
    affiche_vache("uu");
    for (int i = 2; i <= argc-1; i++){
        gotoxy(4,5);
        printf("%s", argv[i]);
        gotoxy(3,5);
        printf("%s", argv[i-1]);
        sleep(1);
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");
    
    return 0;
}
