#include <stdlib.h> 
#include <stdio.h>
#include <unistd.h>
 

#define byebyelife 1
#define liferocks  4
#define lifesucks  7
// Une focntion qui affiche la vache en modifiant l'état de ses yeux pour exprimer les trois états
// '--'  -> vache  morte
//'oo'  -> vache  en pleinne forme
//'@@'  -> vache  avec excédent de nourriture
void affiche_vache(char chaine[2]) { 
    printf(" %s %s %s %s %s %s %s"," \'^__ ^\n","\\(",chaine,")\\ _______ \n", " \'(__)\\         ) \\/\\ \n","     \'|| - - - -w |\n" , "     \'||          ||\n "     );
}                                

// Genere un entier entre 0 et borne-1
int generer_entier(int borne) {
    static int seme = 0;
    if (!seme) {
        srandom(getpid());
        seme = 1;
    }
    return random() % borne;
}


int fitness_update(int lunchfood,int fitness){

   int digestion = generer_entier(4) - 3;
   
   return (fitness + lunchfood )+ digestion;
}

int stock_update(int lunchfood,int stock){
    int crop, n;
    n = generer_entier(2);
    if (n==0)
        crop = generer_entier(4) - 3;
    else
        crop = generer_entier(4);

    

    return (stock - lunchfood) + crop;;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    int fitness = 5;
    int stock = 5;
    int etat_courant = liferocks;
    int etat_suivant;
    int duree_vie = 0; 
    int lunchfood;
   
   
    
    printf("Stock INITIAL est:%d\n", stock);  //stock initial à afficher dès le début de la partie
    while (fitness!=0 && stock>=0 && stock<=10 ){   
        

    //je calcule les transitions possibles en affichant l'état de la vache et le stock courant
     
        if (etat_courant==byebyelife){
            if (fitness>=4 && fitness<=6){
                    etat_suivant = liferocks;
                    affiche_vache("oo");
                    printf("Stock courant est:%d\n", stock);
            }
            if (fitness>=7 && fitness<=9){
                    etat_suivant = lifesucks;
                    affiche_vache( "@@");
                    printf("Stock courant est:%d\n", stock);
                    
                    

            }
        }
        else if (etat_courant==liferocks){
            if (fitness>=1 && fitness<=3){
                    etat_suivant = byebyelife;
                    printf("Stock courant est:%d\n", stock);
                    affiche_vache( "xx");
                 
            }
            if (fitness>=7 && fitness<=9){
                    etat_suivant = lifesucks;
                    affiche_vache( "@@");

                    printf("Stock courant est:%d\n", stock);
                    
                    
            }

        }
        else {
            if (fitness>=1 && fitness<=3){
                    etat_suivant = byebyelife;
                    affiche_vache( "xx");
                    printf("Stock courant est:%d\n", stock);
                    
            }
            if (fitness>=4 && fitness<=6){
                    etat_suivant = liferocks;
                    affiche_vache( "oo");
                    printf("Stock courant est:%d\n", stock);
                    
                    
            }



        }
        etat_courant = etat_suivant;
        printf("Veuillez saisir une quantité de nourriture inférieure au stock courant:\n");
        scanf("%d", &lunchfood);
        stock = stock_update(lunchfood, stock);  //mise à jour du stock
        fitness = fitness_update(lunchfood, fitness); // mise à jour du niveau de santé
      
      
        duree_vie++;
    }
    affiche_vache("--");
    printf("C'est mooooort\n");
    
    printf("Votre score est:%d\n", duree_vie);

    return 0;
}
    