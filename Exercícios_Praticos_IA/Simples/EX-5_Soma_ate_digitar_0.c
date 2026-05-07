#include<stdio.h>

int main(){
int num, soma;

soma = 0;
while(num != 0){
    printf("Digite um numero (0 para parar): ");
    scanf("%d", &num);

    soma = soma + num;
}

printf("A soma dos numeros e: %d", soma);

    return 0;
}