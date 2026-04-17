#include<stdio.h>

int main(){
float nota_1, nota_2;
int presenca;

printf("Digite sua presenca (de 0 ate 100)\n");
scanf("%d", &presenca);
printf("Calculadora de media do aluno\n");
printf("Digite a sua nota: ");
scanf("%f", &nota_1);
printf("Digite sua segunda nota: ");
scanf("%f", &nota_2);

float media = (nota_1 + nota_2)/2;
printf("A media do aluno e: %.2f, a frequencia do aluno e: %d, o aluno esta: ", media, presenca);
if(media >= 6 && presenca >= 75){
printf("Aprovado");
}else if(media >= 4 && presenca >= 75){
printf("Recuperacao");
}else if(media >= 6 && presenca < 75){
printf("Reprovou por Falta");
}else{
printf("Reprovado");
}


return 0;
}