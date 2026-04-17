#include<stdio.h>

int main(){

    int temperatura;
    float temp_f, temp_c;
//Menu inicial de escolha
    printf("=== MENU ===\n");
    printf("1 - Conersao para Celsius\n");
    printf("2 - Conversao para Fahrenheit\n");
    printf("Selecione uma das opcoes acima: ");
    scanf("%d", &temperatura);
    printf("========================\n");

    switch(temperatura){
    //Caso 1: Recebe uma temperatura em Fahrenheit, converte e exibe em grau Celsius
        case 1:
        printf("--- CALCULADORA DE FAHRENHEIT PARA CELSIUS ---\n");
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp_f);

        temp_c = (temp_f - 32)/1.8;

        printf("%.2f em grau Celsius e %.2f", temp_f, temp_c);
        break;
    //Caso 2: Recebe uma temperatura em grau Celsius, converte e exibe em Fahremheit
        case 2:
        printf("--- CALCULADORA DE CELSIUS PARA FAHRENHEIT ---\n");
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp_c);

        temp_f = 1.8*temp_c + 32;

        printf("%.2f em Fahrenheit e %.2f", temp_c, temp_f);
        break;
        default:
        printf("Erro, numero invalido");
    }
    return 0;
}