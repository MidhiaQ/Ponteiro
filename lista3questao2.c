#include <stdio.h>

/*Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do
array. A função deverá preencher os elementos de array com esse valor. Não utilize
índices para percorrer o array, apenas aritmética de ponteiros.*/

void parametro(int *array, int tam){
int *p = array;
int valor;

for(p = array; p < array + tam; p++){
   printf("Digite o valor do %d elemento:\n", (p - array) + 1);
        scanf("%d", &valor);  
        *p = valor;
   
    }
}

int main(void){
    int tam;
    
     
    printf("\nDigite o tamanho do array:");
        scanf("%d", &tam);
      

int array[tam];

     parametro(array, tam);

     for(int i = 0; i < tam; i++){
        printf("Os elementos sao: %d\n", array[i]);
     }   
        return 0;
    }
