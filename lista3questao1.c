#include <stdio.h>

/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.*/

int main(){
    
    float mat[3][3];
    float *p;
    int i;

    p = mat[0];

    for(i = 0; i < 9; i++){
        
        printf("\nO enderco e: %p\n", p);
   
     p++;

    }

    return 0;
}
