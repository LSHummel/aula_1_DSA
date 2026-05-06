#include<stdio.h>

void menu(void){
printf("---- MENU ----\n");
printf("1 - Fahrenheit -> Celsius\n");
printf("2 - Celsius -> Fahrenheit\n");
printf("3 - Sair\n");
printf("Escolha uma das opcoes: ");
}

int main(){

int opcao;
float temp_f, temp_c;
while(opcao != 3){
menu();
scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp_f);

        temp_c = (temp_f - 32) / 1.8;

        printf("%.2f em Celcius e %.2f\n", temp_f, temp_c);
        break;
    case 2:
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp_c);

        temp_f = 1.8 * temp_c + 32;

        printf("%.2f em Fahremheit e %.2f\n", temp_c, temp_f);
        break;
    case 3:
        printf("----- Fim -----");
        break;
    }
}






    return 0;
}