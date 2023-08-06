#include <stdio.h>

/*Crie um programa que contenha um array de inteiros contendo 10 elementos.
Imprima os endereços de cada posição desse array.*/

int main(){

    int dez[10];
    int i;

    for(i = 0; i <= 10; i++){
        printf("Endereco do elemento %d: %p\n", i, (void*)&dez[i]);
    }
    return 0;
}
