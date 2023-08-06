/*Escreva uma função que aceita como parâmetro um array de inteiros, e determina o
maior elemento do array e o número de vezes que este elemento ocorreu no array. Por
exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a
função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando
que o número 15 ocorreu 3 vezes). A função deve ser do tipo void.*/

#include <stdio.h>
#include <stdlib.h>

void MaiorVezes(int array[], int tam, int *vezes, int *maior){
    *maior = array[0];
    *vezes = 1;

    for(int i = 1; i < tam; i++){     
        if (array[i] > *maior) {
            *maior = array[i];  
            *vezes = 1; 
        } else if (array[i] == *maior) {
            (*vezes)++;  
        }
    }
}

int main(void){
    int tam;

    printf("Determine o tamanho do array:");
        scanf("%d", &tam);

   int *array = (int*)malloc(tam * sizeof(int));
    if(array == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    
    for (int i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int maior, vezes;

    MaiorVezes(array, tam, &vezes, &maior);

    printf("Maior elemento: %d\n", maior);
    printf("Numero de ocorrencias: %d\n", vezes);

    free(array);

    return 0;
}
