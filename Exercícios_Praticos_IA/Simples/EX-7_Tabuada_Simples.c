#include<stdio.h>

int main(){

int M, tabuada;

printf("Digite o numero que quer saber a tabuda ate o 10: ");
scanf("%d", &M);

for(int i = 0; i < 11 ; ++i){
    
    tabuada = M * i;
    printf("%d X %d = %d\n", M, i, tabuada);

}
    return 0;
}