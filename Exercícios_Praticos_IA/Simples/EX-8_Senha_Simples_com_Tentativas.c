#include<stdio.h>

int main(){

int senha, tentativa, chances;

printf("Crie uma senha com apenas tres numeros: ");
scanf("%d", &senha);


chances = 0;
while(chances != 3){

printf("Digite a senha: ");
scanf("%d", &tentativa);

if(tentativa != senha){
    printf("Senha incorreta\n");
}else{
    printf("Senha correta");
}
chances = chances + 1;
}
if(chances == 3){
    printf("Acabaram as tentativas, tente novamente mais tarde");
}


    return 0;
}