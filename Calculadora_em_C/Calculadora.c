
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846 

int main() {
    int opcao;
    double a, b;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        printf("\n--- CALCULADORA EM C ---\n");
        printf(" 1. Soma                    11. Tangente (graus)\n");
        printf(" 2. Subtracao               12. Logaritmo Natural\n");
        printf(" 3. Multiplicacao           13. Logaritmo Base 10\n");
        printf(" 4. Divisao                 14. Exponencial\n");
        printf(" 5. Potencia                15. Raiz Cubica\n");
        printf(" 6. Raiz Quadrada           16. Quadrado (x^2)\n");
        printf(" 7. Resto (Modulo)          17. Cubo (x^3)\n");
        printf(" 8. Porcentagem (X%% de Y)  18. Valor Absoluto\n");
        printf(" 9. Seno (graus)            19. Hipotenusa\n");
        printf("10. Cosseno (graus)         20. IMC\n");
        printf(" 0. Sair\n");
        printf("Escolha uma das operaçoes: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nSaindo da calculadora...\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &a);
                printf("Digite o segundo numero: ");
                scanf("%lf", &b);
                printf("O resultado da soma é: %.2lf\n", a + b);
                break;

            case 2:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &a);
                printf("Digite o segundo numero: ");
                scanf("%lf", &b);
                printf("O resultado da subtracao é: %.2lf\n", a - b);
                break;

            case 3:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &a);
                printf("Digite o segundo numero: ");
                scanf("%lf", &b);
                printf("O resultado da multiplicacao é: %.2lf\n", a * b);
                break;

            case 4:
                printf("Digite o dividendo: ");
                scanf("%lf", &a);
                printf("Digite o divisor: ");
                scanf("%lf", &b);
                if (b != 0) {
                    printf("O resultado da divisao é: %.2lf\n", a / b);
                } else {
                    printf(">> Erro: nao se pode dividir por zero!\n");
                }
                break;

            case 5:
                printf("Digite a base: ");
                scanf("%lf", &a);
                printf("Digite o expoente: ");
                scanf("%lf", &b);
                printf("O resultado da potenciacao é: %.2lf\n", pow(a, b));
                break;

            case 6:
                printf("Digite o radicando: ");
                scanf("%lf", &a);
                if (a >= 0) {
                    printf("O resultado da raiz quadrada é: %.2lf\n", sqrt(a));
                } else {
                    printf(">> Erro: Nao existe raiz quadrada de numero negativo nos reais!\n");
                }
                break;

            case 7:
                printf("Digite o dividendo (numero inteiro): ");
                scanf("%lf", &a);
                printf("Digite o divisor (numero inteiro): ");
                scanf("%lf", &b);
                if ((int)b != 0) {
                    printf("O resultado do resto da divisao é: %d\n", (int)a % (int)b);
                } else {
                    printf(">> Erro: Divisao por zero nao e permitida!\n");
                }
                break;

            case 8:
                printf("Digite a porcentagem (%%): ");
                scanf("%lf", &a);
                printf("Digite o valor total: ");
                scanf("%lf", &b);
                printf("O resultado da porcentagem é: %.2lf\n", (a / 100.0) * b);
                break;

            case 9:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &a);
                printf("O resultado do seno é: %.4lf\n", sin(a * PI / 180.0));
                break;

            case 10:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &a);
                printf("O resultado do cosseno é: %.4lf\n", cos(a * PI / 180.0));
                break;

            case 11:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &a);
                printf("O resultado da tangente é: %.4lf\n", tan(a * PI / 180.0));
                break;

            case 12:
                printf("Digite o logaritmando (positivo e maior que zero): ");
                scanf("%lf", &a);
                if (a > 0) {
                    printf("O resultado do logaritmo natural é: %.4lf\n", log(a));
                } else {
                    printf(">> Erro: O logaritmo exige um valor maior que zero!\n");
                }
                break;

            case 13:
                printf("Digite o logaritmando (positivo e maior que zero): ");
                scanf("%lf", &a);
                if (a > 0) {
                    printf("O resultado do logaritmo na base 10 é: %.4lf\n", log10(a));
                } else {
                    printf(">> Erro: O logaritmo exige um valor maior que zero!\n");
                }
                break;

            case 14:
                printf("Digite o expoente (x): ");
                scanf("%lf", &a);
                printf("O resultado da exponencial é: %.4lf\n", exp(a));
                break;

            case 15:
                printf("Digite o radicando: ");
                scanf("%lf", &a);
                printf("O resultado da raiz cubica é: %.4lf\n", cbrt(a));
                break;

            case 16:
                printf("Digite o numero a ser elevado ao quadrado: ");
                scanf("%lf", &a);
                printf("O resultado do quadrado é: %.2lf\n", a * a);
                break;

            case 17:
                printf("Digite o numero a ser elevado ao cubo: ");
                scanf("%lf", &a);
                printf("O resultado do cubo é: %.2lf\n", a * a * a);
                break;

            case 18:
                printf("Digite o numero para calcular o valor absoluto: ");
                scanf("%lf", &a);
                printf("O resultado do valor absoluto é: %.2lf\n", fabs(a));
                break;

            case 19:
                printf("Digite o valor do primeiro cateto: ");
                scanf("%lf", &a);
                printf("Digite o valor do segundo cateto: ");
                scanf("%lf", &b);
                printf("O resultado do calculo de hipotenusa é: %.2lf\n", hypot(a, b));
                break;

            case 20:
                printf("Digite o peso em kg: ");
                scanf("%lf", &a);
                printf("Digite a altura em metros (ex: 1.75): ");
                scanf("%lf", &b);
                if (b > 0) {
                    printf("O resultado do calculo de IMC é: %.2lf\n", a / (b * b));
                } else {
                    printf(">> Erro: A altura deve ser maior que zero!\n");
                }
                break;

            default:
                printf(">> Os numeros devem estar entre 0 e 20\n");
        }

        printf("\nDeseja realizar outro calculo? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 'n' || continuar == 'N') {
            printf("\nPrograma encerrado. Ate mais!\n");
            break;
        }
    }

    return 0;
}
