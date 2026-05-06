#include<stdio.h>

void menu(void){
printf("==============================\n");
printf("    SISTEMA EQUIPE TUCURUVI\n");
printf("==============================\n");
printf("1 - Inserir notas\n");
printf("2 - Calcular media\n");
printf("3 - Verificar situacao\n");
printf("4 - Exibir resultado\n");
printf("5 - Calcular derivada\n");
printf("6 - Sair\n");
printf("Escolha uma opcao: ");
}
int main(){

int opcao;
double a, b, c;
float nota1, nota2, media;
while(opcao != 6){

    menu();
    scanf("%d", &opcao);
    switch (opcao)
    {
        case 1:
            printf("Digite a nota 1: ");
            scanf("%f", &nota1);
            printf("Digite a nota 2: ");
            scanf("%f", &nota2);
            break;
         case 2:
            media = (nota1 + nota2)/2;
            printf("A media do aluno foi calculada\n");
            break;
        case 3:
        printf("Sua media e: %.2f\n", media);
        break;
        case 4:
            if (media < 6 && media >= 4){
                printf("Recuperação\n");
            }else if (media >= 6){
                printf("Aprovado\n");
            }else if (media < 4){
                printf("Reprovado\n");
            }
            break;
        case 5:
         printf("Digite o valor de a: "); 
         scanf("%lf", &a);
         printf("Digite o valor de b: "); 
         scanf("%lf", &b);
         printf("Digite o valor de c: ");
         scanf("%lf", &c);
         double coeficiente = 2.0 * a; 
         printf("Derivada: f'(x) = %.2fx + %.2f\n", coeficiente, b);
            break;
        case 6:
            break;
        default:
            break;
         }
        }
}