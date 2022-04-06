#include <stdio.h>
#include "takuzuu.h"

int main() {
    int var;
    int choix;
    int choixtaille;
    matrice4x4 tab={{0,1,1,0},{1,0,1,0},{1,0,0,1},{0,1,0,1}};
    matrice8x8 tableau= {{0,0,1,1,0,1,0,1},
                         {0,1,1,0,1,0,1,1},
                         {0,0,1,0,1,0,1,0},
                         {1,0,1,1,0,1,1,0},
                         {1,0,0,1,0,1,0,1},
                         {1,0,1,1,0,0,1,0},
                         {0,1,0,1,0,1,1,0},
                         {0,1,0,1,0,0,1,0}};
    do {
        printf("Bienvenue dans le menu, choisissez l'option que vous souhaitez: \n");
        printf("1) Resoudre la grille\n");
        printf("2) Resoudre automatiquement une grille\n");
        printf("3) Generer une grille de de Takuzu\n");
        printf("Veuillez choisir le numero que vous desirez\n");
        scanf("%d", &var);
    } while (var < 0 || var > 3);
    if (var == 1) {
        do {
            printf("1) Choisir la taille de la grille: 4x4 ou 8x8\n");
            printf("2) Saisissez manuellement un masque\n");
            printf("3) Generez automatiquement un masque\n");
            printf("4) Jouez\n");
            printf("Veuillez choisir le numero que vous desirez\n");
            scanf("%d", &choix);
        } while (choix < 0 ||  choix > 4);
        if( choix ==1){
            do{
                printf("Veuillez choisir la taille: 4x4 ou 8x8\n");
                printf("1) Taille : 4x4\n");
                printf("2) Taille: 8x8\n");
                scanf("%d",&choixtaille);
            }while(choixtaille<0 || choixtaille>2);
            if(choixtaille==1){
                printf("  A B C D\n");
                solution4x4(tab);
            }
            else{
                printf("  A B C D E F G H\n");
                solution8x8(tableau);
            }
        }
    }
    return 0;
}