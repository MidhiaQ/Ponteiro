/*Faça um programa que leia três valores inteiros e chame uma função que receba estes
3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira
variável, o segundo menor valor na variável do meio, e o maior valor na última
variável. A função deve avisar caso os valores sejam iguais. Exibir os valores
ordenados na tela*/
#include <stdio.h>

void ordenados(int *n1, int *n2, int *n3){
    int temp;

    if(*n1 > *n2){
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    else if(*n2 > *n3){
        temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }
}

int main(void){
    int n1, n2, n3;
   
    printf("Digite tres numeros:");
        scanf("%d %d %d", &n1, &n2, &n3);

   ordenados(&n1, &n2, &n3);

    if (n1 == n2 && n2 == n3) {
        printf("Os valores sao iguais: %d %d %d\n", n1, n2, n3);
    }
    else if(n1 == n2){
        printf("Os valores sao iguais: %d %d\n", n1, n2);
    }
    else if(n2 == n3){
        printf("Os valores sao iguais: %d %d\n", n2, n3);
    }
    else{
        printf("Os valores sao iguais: %d %d\n", n1, n3);
    }
    printf("Valores ordenados: %d %d %d\n", n1, n2, n3);
}
