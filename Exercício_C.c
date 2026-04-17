#include <stdio.h>

int main(){
int valor_1 = 10;
int valor_2 = 3;

printf("                     EXEMPLOS DE AULA \n");
printf("O resultado da Soma e: %d\n", valor_1 + valor_2);
printf("O resultado da Subtracao e: %d\n", valor_1 - valor_2);
printf("O resultado da Multipicacao e: %d\n", valor_1 * valor_2);
printf("O resultado da Diisao e: %d\n", valor_1 / valor_2);
printf("O Resto da Divisao e: %d\n", valor_1 % valor_2);
printf("\n");



// Exercicios em casa - 1

int x_1 = (2 + 3) * 4;
float x_2 = 10 / 3;
float x_3 = 10 / 3.0;
int x_4 = 5 + 7 / 2;
int x_5 = 10 > 5;
int x_6 = 10 == 5;
int x_7 = (2 + 3) > (4 * 2);
int x_8 = (10 / 2) + (3 > 1);
int x_9 = (5 > 3) * 10;
int x_10 = (8 + 2) / (3 + 2);
int x_11 = (8 + 2) / 3 + 2;
int x_12 = 5 / 2 * 2;
int x_13 = (10 > 5) + (3 * 2);

printf("                  EXERCICIOS DE CASA \n");
printf("O resultado da funcao e: %d\n", x_1);
printf("O resultado da funcao e: %.5f\n", x_2);
printf("O resultado da funcao e: %.8f\n", x_3);
printf("O resultado da funcao e: %d\n", x_4);
printf("O resultado relacional e: %d\n", x_5);
printf("O resultado relacional e: %d\n", x_6);
printf("O resultado relacional e: %d\n", x_7);
printf("O resultado da funcao e: %d\n", x_8);
printf("O resultado da funcao e: %d\n", x_9);
printf("O resultado da funcao e: %d\n", x_10);
printf("O resultado da funcao e: %d\n", x_11);
printf("O resultado da funcao e: %d\n", x_12);
printf("O resultado da funcao e: %d\n", x_13);
printf("\n");


//Exercicios em casa - 2

int a, b;
scanf("%d %d", &a, &b );
int x = a + b * 2;
printf("O resultado da operacao e: %d\n", x);


int idade;
scanf("%d", &idade);
int maior = idade >= 18;
printf("O resultado relacional e: %d\n", maior);

return 0;
};