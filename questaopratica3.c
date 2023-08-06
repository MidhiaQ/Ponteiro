#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int n;
    int *p;

    for(int i = 0; i < 5; i++){
        printf("\nDigite o elemento numero %d:", i+1);
            scanf("%d", &n); 
            array[i] = n;
        if(array[i] % 2 == 0){
            p = &array[i];
            printf("\nO enderco e: %p\n", p);
        }
    }

   return 0;
}
