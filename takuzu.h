//
// Created by raphb on 06/04/2022.
//

#ifndef TAKUZU_TAKUZU_H
#define TAKUZU_TAKUZU_H
#define max4x4 4
#define max8x8 8
#include <stdio.h>
#include <stdlib.h>
#include "takuzu.h"
#include "time.h"


void afficher_grille(int** tableau,int n);
void creer_masque_manu(int** Masque,int n);
int choisir_taille();
void grilleauto(int** tableau,int n);

#endif //TAKUZU_TAKUZU_H
