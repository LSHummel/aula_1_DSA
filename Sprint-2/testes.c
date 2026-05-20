#include <stdio.h>

void menu(void){
    printf("================================\n");
    printf("    MENU - RECARGA DE BATERIA\n");
    printf("================================\n");
    printf("1 - Informacoes do carro\n");
    printf("2 - Energia consumida\n");
    printf("3 - Tempo estimado de recarga\n");
    printf("4 - Custo da recarga\n");
    printf("5 - Relatorio de uso\n");
    printf("6 - Adicionar outro carro\n");
    printf("7 - Fim da Simulacao\n");
    printf("Escolha uma opcao: ");
}

int main(){

    int opcao, fechar;
    int carro_atual=0;

    float fator_tempo=1.0;
    // Vetores para armazenar varios carros
    float total_kwh[100];
    float porcentagem[100];
    float ener_consumida[100];
    float valor_total[100];
    float tempo[100];
    float porcentagem_f[100];

    while(opcao != 7){

        menu();
        scanf("%d", &opcao);
        printf("\n");

        switch(opcao){

            case 1:

                printf("=========================\n");
                printf("  Informacoes do carro\n");
                printf("=========================\n");

                printf("Quantos kWh cabem no carro:\n");
                scanf("%f", &total_kwh[carro_atual]);

                printf("Porcentagem de energia do carro:\n");
                scanf("%f", &porcentagem[carro_atual]);

                // Validação da porcentagem
                while(porcentagem[carro_atual] < 0 || porcentagem[carro_atual] > 100){
                    printf("A porcentagem esta errada, digite novamente (0 ate 100):\n");
                    scanf("%f", &porcentagem[carro_atual]);
                }
                // Calculos

                if(carro_atual > 9){
                    printf("\n");
                    printf("ERRO NO SISTEMA!\n");
                    printf("Quantidade maxima excedida!\n");
                    printf("O sistema foi desligado instantaneamente.\n");
                    printf("Dados da sessao perdidos!\n");
                    return 0;
                }

                if(carro_atual > 8){
                    fator_tempo = 2.0;
                }else if(carro_atual > 5){
                    fator_tempo = 1.5;
                }else if(carro_atual > 2){
                    fator_tempo = 1.2;
                }

                ener_consumida[carro_atual] = total_kwh[carro_atual] - total_kwh[carro_atual] * (porcentagem[carro_atual] / 100);
                tempo[carro_atual] = ((ener_consumida[carro_atual] * 60) / 50) * fator_tempo;
                valor_total[carro_atual] = ener_consumida[carro_atual] * 2 + 1.80;
                porcentagem_f[carro_atual] = 100 - porcentagem[carro_atual];

                printf("\n");
                printf("Para voltar ao menu digite 0\n");
                scanf("%d", &fechar);
                while(fechar != 0){
                    printf("Para voltar ao menu digite 0\n");
                    scanf("%d", &fechar);
                    switch(fechar){
                        case 0:
                            break;}}

                printf("\n");
                printf("Informacoes salvas com sucesso!\n");
                printf("\n");
                break;

            case 2:

                printf("=========================\n");
                printf("    Energia consumida\n");
                printf("=========================\n");

                printf("Energia consumida: %.2f kWh\n", ener_consumida[carro_atual]);
                printf("\n");

                printf("\n");
                printf("Para voltar ao menu digite 0\n");
                scanf("%d", &fechar);
                while(fechar != 0){
                    printf("Para voltar ao menu digite 0\n");
                    scanf("%d", &fechar);
                    switch(fechar){
                        case 0:
                            break;}}

                break;

            case 3:

                printf("=========================\n");
                printf("Tempo estimado de recarga\n");
                printf("=========================\n");

                printf("Tempo de recarga: %.2f minutos\n", tempo[carro_atual]);
                printf("\n");

                printf("\n");
                printf("Para voltar ao menu digite 0\n");
                scanf("%d", &fechar);
                while(fechar != 0){
                    printf("Para voltar ao menu digite 0\n");
                    scanf("%d", &fechar);
                    switch(fechar){
                        case 0:
                            break;}}

                break;

            case 4:

                printf("=========================\n");
                printf("    Custo da recarga\n");
                printf("=========================\n");

                printf("Custo total: R$%.2f\n", valor_total[carro_atual]);
                printf("\n");

                printf("\n");
                printf("Para voltar ao menu digite 0\n");
                scanf("%d", &fechar);
                while(fechar != 0){
                    printf("Para voltar ao menu digite 0\n");
                    scanf("%d", &fechar);
                    switch(fechar){
                        case 0:
                            break;}}

                break;

            case 5:

                printf("=========================\n");
                printf("       RELATORIO\n");
                printf("=========================\n");

                for(int i = 0; i <= carro_atual; i++){

                    printf("\n");
                    printf("CARRO %d\n", i + 1);
                    printf("-------------------------\n");
                    printf("kWh do carro: %.2f\n", total_kwh[i]);
                    printf("Porcentagem a carregar: %.0f%%\n", porcentagem_f[i]);
                    printf("Energia consumida: %.2f kWh\n", ener_consumida[i]);
                    printf("Tempo estimado: %.2f minutos\n", tempo[i]);
                    printf("Custo total: R$%.2f\n", valor_total[i]);
                    printf("-------------------------\n");
                }
                printf("\n");

                printf("\n");
                printf("Para voltar ao menu digite 0\n");
                scanf("%d", &fechar);
                while(fechar != 0){
                    printf("Para voltar ao menu digite 0\n");
                    scanf("%d", &fechar);
                    switch(fechar){
                        case 0:
                            break;}}

                break;

            case 6:

                carro_atual++;

                printf("Novo carro selecionado!\n");
                printf("Agora cadastre as informacoes do novo carro.\n\n");

                printf("\n");
                printf("Para voltar ao menu digite 0\n");
                scanf("%d", &fechar);
                while(fechar != 0){
                    printf("Para voltar ao menu digite 0\n");
                    scanf("%d", &fechar);
                    switch(fechar){
                        case 0:
                            break;}}

                break;

            case 7:
                printf("Enviando dados da sessao...\n");
                printf("Dados enviados com sucesso!\n");
                printf("---- Fim da Simulacao ----\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}