#include<stdio.h>

int main(){

int num_1, num_2, resultado;
    
printf("Digite um numero inteiro: ");
scanf("%d", &num_1);
printf("Digite outro numero inteiro: ");
scanf("%d", &num_2);

resultado = (num_1+num_2)*2;

printf("O resultado da conta (%d + %d) * 2 = %d", num_1, num_2, resultado);

    return 0;
}