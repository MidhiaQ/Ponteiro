#include <stdio.h>


/*Escreva uma função chamada troca, que troca os valores dos parâmetros recebidos
usando ponteiros.*/

void troca(int *pA, int *pB){ /*Função sem retorno usando ponteiro*/
    int temp = *pA; /*Variavel criada que está recebendo o valor do primeiro ponteiro*/
    *pA = *pB;
    *pB = temp;
    /*Os ponteiros estão trocando de valores*/
}

int main(void){

    int a, b; 

    printf("Digite dois valores:\n"); /*Pedindo os valores para a troca*/
    scanf("\n%d \n%d", &a, &b); /*Lendo os valores pedidos*/

    printf("\nValores lidos: \na = %d \nb = %d", a, b); /*Mostrando os valores digitados*/

    troca(&a, &b); /*Trocando os valores das variaveis*/

    printf("\nValores trocados: \na = %d \nb = %d", a, b); 
    /*Mostrando os valores trocados*/
}
