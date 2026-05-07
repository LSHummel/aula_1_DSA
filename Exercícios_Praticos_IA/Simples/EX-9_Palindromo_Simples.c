#include<stdio.h>

int main(){

int num, resto, invertido, original;

printf("Digite um numero de tres digitos, e descubra se ele e um palindromo: ");
scanf("%d", &num);

original = num;
invertido = 0;
while(num!=0){
    resto = num % 10;
    invertido = invertido * 10 + resto;
    num/=10;
}

if(original == invertido){
    printf("E palindromo");
}else{
    printf("nao e palindromo");
}
    return 0;
}