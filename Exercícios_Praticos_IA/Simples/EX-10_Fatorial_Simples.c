#include<stdio.h>

int main(){

int N, fatorial = 1;

printf("Digite um numero para descobrir seu fatorial: ");
scanf("%d", &N);

for(int i = 1; i <= N; ++i){

fatorial*=i;
}

printf("%d", fatorial);

    return 0;
}