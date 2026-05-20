#include<stdio.h>


int main(){
    float notas[2] = {10, 8};
    for(int i = 0; i<2;i++){
        printf("%f\n", notas[i]);
    }
    /*
    vetores --> nome_variavel[] ou nome_variavel[n] ou
    nome_variavel[3] = {0, 1, 2} ou nome_variavel[5] = {0, 1, 2,} --> restante esta vazio
   
    */
    notas[0] = 7;
    notas[1] = 7;

    for(int i = 0; i<2;i++){
        printf("%f\n", notas[i]);
    }
    printf("\n");
    printf("O tamanho do vetor: %d", sizeof(notas)/sizeof(notas[0]));


    // Calcular a media das 2 notas - Manual
    printf("\n");
    printf("A media das duas notas e: %.2f", (notas[0] + notas[1]) / 2);








    return 0;
}
