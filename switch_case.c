#include<stdio.h>

/* TIPOS DE FUNCOES
1 - nao entra nada e nao sai

void nome_funcao(void){
    printf("");
} 

2 - entra alguma coisa e nao sai nada

void nome_funcao(tipo_do_dado nome_variavel, ){
}
exemplo:
void soma(int numero_1, int numero_2){
    printf("%d", numero_1 + numeor_2);
}

3 - entra alguma coisa e sai alguma coisa

tipo_do_dado nome_funcao(tipo_do_dado nome_variavel, ...){
    return nome_variavel ou equacao
}

exemplo:
int soma(int numero_1, int numero_2){
    int somatorio = numero_1 + numero_2;
    return somatorio // ou numero_1 + numero_2;
}

*/

void menu(void){
    printf("--- MENU ---\n");
    printf("1 - CALCULADORA DE MEDIA.\n");
    printf("2 - VERIFICACAO DE PRESENCA.\n");
    printf("Selecione uma das opcoes acima: ");
}


int main (){
    /* Criar uma interface com o usuario, onde terá duas opcoes:
    
    1 - media do aluno ---> media = (nota 1 + nota 2)/2
    2 - verificação de presença --> presença ---> >=75 -> presença adequada
                                            ---> <75 - > atentar com a presença
    */ 
    // Declaração das variaveis
    int opcao, presenca;
    float nota1, nota2, media;
    //MENU
    menu();
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        /* Lógica, função*/
        printf("---CALCULADORA DE MEDIA---\n");
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota2);
        if (nota1 <= 10 && nota1 >= 0 && nota2 <= 10 && nota2 >= 0 ){
        media = (nota1 + nota2)/2;
        printf("Sua media e: %.2f. O calculo da media e: (%.2f+%.2f)/2", media, nota1, nota2);
        } else{
            printf("Notas fora do limite");
        }
        break;
        case 2:
        printf("---VERIFICACAO DE PRESENCA---\n");
        printf("Digite a presenca do aluno (0 - 100): ");
        scanf("%d", &presenca);
        if (presenca >= 75 && presenca < 101){
            printf("Aluno s/ pendencia na presenca: %d", presenca);
        } else if(presenca >= 0 && presenca < 75){
            printf("Aluno c/ pendencia na presenca: %d", presenca);
        } else{
            printf("O valor da frequencia e inavalido");
        }
        break;
        default: 
        printf("Opcao invalida");
    }
    return 0;
}