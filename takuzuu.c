//
// Created by Matteo on 04/04/2022.
//

#include "takuzuu.h"
#include <stdio.h>

#define max4x4 4
#define max8x8 8
typedef int matrice4x4[max4x4][max4x4];
typedef int matrice8x8[max8x8][max8x8];
void solution4x4(matrice4x4 tab)
{
    int x;
    int y;
    for(x = 0; x < max4x4; ++x)
    {
        printf("%d ",x+1);
        for(y = 0; y < max4x4; y++){
            printf("%d ", tab[x][y]);
        }


        printf("\n");
    }
}
void   solution8x8(matrice8x8 tableau){
    int i,j;
    for(i=0;i<max8x8;i++){
        printf("%d ",i+1);
        for(j=0;j<max8x8;j++)
            printf("%d ",tableau[i][j]);
        printf("\n");
    }
}