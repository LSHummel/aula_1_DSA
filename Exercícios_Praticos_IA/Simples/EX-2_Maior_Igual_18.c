#include<stdio.h>

int main(){

int idade, qt_falta;

printf("Digite a sua idade: ");
scanf("%d", &idade);

qt_falta = 18 - idade;

if (idade >= 18){
    printf("Voce pode tirar CNH");
} else {
    printf("Voce e muito novo para tirar CNH, faltam %d anos", qt_falta);
}

    return 0;
}