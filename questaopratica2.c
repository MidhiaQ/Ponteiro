#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p; 
    int vet[5];
    p = vet;

    for(int i = 0; i < 5; i++){
        printf("\nDigite o numero %d\n", i+1);
            scanf("%d", p);
        printf("\nO dobro do valor e: %d\n", *p * 2);
           p++;     
    }
}
