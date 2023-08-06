/*Crie uma função para somar dois arrays. Esta função deve receber os arrays e
preencher a soma em um terceiro array. Utilize aritmética de ponteiros para
manipulação do array.*/
#include <stdio.h>
#include <stdlib.h>

void soma(int *array1, int *array2, int *array3, int tam){
    
    for(int i = 0; i < tam; i++){
        *(array3 + i) = *(array1 + i) + *(array2 + i);
    }
}
void imprime(int *array, int tam){
    for(int i = 0; i < tam; i++){
        printf("\n%d\n", *(array + i));
    }
}

int main(void){
    int tam = 5;
    int array1[]={1, 2, 3, 4, 5};
    int array2[]={6, 7, 8, 9, 10};
    int array3[tam];

    soma(array1, array2, array3, tam);

    printf("\nArray 1:\n");
        imprime(array1, tam);

    printf("\nArray 2:\n");
        imprime(array2, tam);   

    printf("\nArray 3:\n");
        imprime(array3, tam);     
}
