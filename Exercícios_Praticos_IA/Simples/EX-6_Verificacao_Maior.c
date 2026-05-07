#include<stdio.h>

int main(){

int num1, num2, num3, maior;


printf("Digite um numero: ");
scanf("%d", &num1);
printf("Digite um segundo numero: ");
scanf("%d", &num2);
printf("Digite um terceiro numero: ");
scanf("%d", &num3);

if(num1 > num2 && num1 > num3){
    maior = num1;
}else if(num2 > num1 && num2 > num3){
    maior = num2;
}else{
    maior = num3;
}

printf("O maior numero digitado e: %d", maior);

    return 0;
}