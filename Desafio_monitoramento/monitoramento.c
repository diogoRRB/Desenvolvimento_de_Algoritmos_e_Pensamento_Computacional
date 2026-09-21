#include <stdio.h>

int main() {
    float limite, temp;
    float soma = 0, maior = 0, menor = 0;
    int total_leituras = 0;
    int acima_limite = 0;
    int consecutivas_acima = 0;
    int total_avisos = 0;
    int continuar_loop = 1;
    char proximo_char; 

    int limite_valido = 0;
    while (limite_valido == 0) {
        printf("Digite o limite de temperatura seguro do aparelho: ");
        
        if (scanf("%f%c", &limite, &proximo_char) == 2 && limite > 0) {
            if (proximo_char == '\n') {
                limite_valido = 1;
            } else {
                printf("Entrada invalida! Nao misture numeros com letras.\n\n");
                while (proximo_char != '\n') {
                    proximo_char = getchar();
                }
            }
        } else {
            printf("Entrada invalida! Digite um valor numerico maior que zero.\n\n");
            scanf("%*s"); 
        }
    }

    printf("\n--- Monitoramento de Temperatura ---\n");
    printf("Insira as leituras de temperatura do sensor.\n");
    printf("O sistema parara automaticamente se houver 3 leituras consecutivas acima do limite.\n\n");

    while (continuar_loop == 1) {
        printf("Leitura %d - Digite a temperatura: ", total_leituras + 1);
        
        if (scanf("%f%c", &temp, &proximo_char) == 2) {
            if (proximo_char == '\n') {
                total_leituras++;

                if (total_leituras == 1) {
                    maior = temp;
                    menor = temp;
                } else {
                    if (temp > maior) {
                        maior = temp;
                    }
                    if (temp < menor) {
                        menor = temp;
                    }
                }

                soma += temp;

                if (temp > limite) {
                    acima_limite++;
                    consecutivas_acima++;
                    printf("Temperatura acima do limite. (Consecutivas: %d/3)\n\n", consecutivas_acima);
                } 
                else if (temp == limite) {
                    consecutivas_acima = 0; 
                    total_avisos++; 
                    printf("Opa, seu aparelho pode estar ficando quente.\n\n");
                } 
                else {
                    consecutivas_acima = 0; 
                    printf("Status: Temperatura segura.\n\n");
                }

                if (consecutivas_acima >= 3) {
                    printf("3 leituras consecutivas acima do limite detectadas. \n");
                    printf("Encerrando o sistema de monitoramento...\n\n");
                    continuar_loop = 0; 
                }
            } else {
                printf("Entrada invalida. Nao misture numeros com letras.\n\n");
                while (proximo_char != '\n') {
                    proximo_char = getchar();
                }
            }
        } else {
            printf("Entrada invalida. Digite apenas numeros.\n\n");
            scanf("%*s"); 
        }
    }

    printf("============================\n");
    printf("         RELATORIO          \n");
    printf("============================\n");
    if (total_leituras > 0) {
        printf("Total de leituras realizadas        : %d\n", total_leituras);
        printf("Limite de temperatura configurado  : %.2f C\n", limite);
        printf("Maior temperatura registrada       : %.2f C\n", maior);
        printf("Menor temperatura registrada       : %.2f C\n", menor);
        printf("Media das temperaturas              : %.2f C\n", soma / total_leituras);
        printf("Total de leituras acima do limite  : %d\n", acima_limite);
        printf("Total de avisos (no limite exato)  : %d\n", total_avisos);
    } else {
        printf("Nenhuma leitura foi realizada.\n");
    }
    printf("=============================\n");

    return 0;
}
