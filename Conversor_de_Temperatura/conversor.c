#include <stdio.h>

int main() {
    int opcao;
    double num1, f, c, k;

    printf("CONVERSOR DE TEMPERATURA");
    printf("\n-----------------------------------------------------------\n");
    printf("| 1- Celsius para Fahrenheit | 2- Fahrenheit para Celsius\n");
    printf("| 3- Kelvin para Fahrenheit | 4- Fahrenheit para Kelvin\n");
    printf("| 5- Celsius para Kelvin | 6- Kelvin para Celsius\n");
    printf("| 0- para sair.");
    printf("\n-----------------------------------------------------------\n");
    printf("\nEscolha uma opção: \n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o Grau em Celsius: ");
            scanf("%lf", &num1);
            f = (num1 * 1.8) + 32;
            printf("O Grau em Fahrenheit é: %.2f °F\n", f);
            break;
            
        case 2:
            printf("Digite o Grau em Fahrenheit: ");
            scanf("%lf", &num1);
            c = (num1 - 32) / 1.8;
            printf("O Grau em Celsius é: %.2f °C\n", c);
            break;
            
        case 3:
            printf("Digite o Grau em Kelvin: ");
            scanf("%lf", &num1);
            f = (num1 * 1.8) - 459.67;
            printf("O Grau em Fahrenheit é: %.2f °F\n", f);
            break;
            
        case 4:
            printf("Digite o Grau em Fahrenheit: ");
            scanf("%lf", &num1);
            k = (num1 - 32) * 5 / 9 + 273.15;
            printf("O Grau em Kelvin é: %.2f °K\n", k);
            break;
            
        case 5:
            printf("Digite o Grau em Celsius: ");
            scanf("%lf", &num1);
            k = num1 + 273;
            printf("O Grau em Kelvin é: %.2f °K\n", k);
            break;
            
        case 6:
            printf("Digite o Grau em Kelvin: ");
            scanf("%lf", &num1);
            c = num1 - 273;
            printf("O Grau em Celsius é: %.2f °C\n", c);
            break;
            
        case 0:
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("\nEncerrando o programa...\n");
    return 0;
}
