/*Faça um programa em C que leia uma matriz mat 2x3 de inteiros e encontre o menor elemento da matriz*/

#include <stdio.h>

int main(){
    
    int mat[2][3], *p, menor=9999, i, valor;
    p = mat;

for(i = 0; i < 6; i++){
    printf("\nDigite um valor:\n");
    scanf("%d", &valor);
    *p=valor;
    if(valor<menor){
    menor = valor;
    p++;
  }
}

printf("\nO menor valor e: %d", menor);

return 0;
}
