#include <stdio.h>

/*Crie uma função que receba por parâmetro um vetor de números inteiros e os
endereços de duas variáveis inteiras (min e max). Ao passar essas variáveis para a
função seu programa deverá analisar qual é o maior e o menor elemento do vetor e
depositar esses elementos nas variáveis do parâmetro.*/

void minmax(int vet[5], int* min, int* max){
    int i, maior = 0;
    *min = vet[0];
    for(i = 0; i < 5; i++){
        if(vet[i] < *min){
            *min = vet[i];
        }
        if(vet[i] > maior){
            maior = vet[i];
        }
    } 
     *max = maior;  
}

int main(void){
    int vet[5] = {2, 4, 6, 8, 10};
    int min, max = 0;

    minmax(vet, &min, &max);

    printf("\nO valor minimo e: %d\n O valor maximo e: %d\n", min, max);
   
    return 0;
}
