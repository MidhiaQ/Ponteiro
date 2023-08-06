#include <stdio.h>

/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma
função que retorne a soma do dobro dos dois números lidos. A função deverá
armazenar os valores nas próprias variáveis.*/

int soma_dobro(int *a, int *b){

*a = *a * 2;
*b = *b * 2;

return *a + *b;
}

int main(){

int A, B;

printf("Digite dois numeros:\n");
    scanf("\n%d \n%d", &A, &B);

soma_dobro(&A, &B);

printf("\nA soma do dobro e: %d", A + B);


return 0;

}
