# Calculadora em C

**Estudante:** Diogo Ribeiro Rodrigues Braúna  
**Disciplina:** Desenvolvimento de Algoritmos e Pensamento Computacional  
**Linguagem:** C  

---

##  Descrição do Projeto e Objetivo
Este projeto consiste em uma calculadora interativa desenvolvida na linguagem C, executada via terminal. O objetivo principal é fornecer uma ferramenta matemática abrangente capaz de realizar desde operações aritméticas básicas até cálculos trigonométricos, logarítmicos e conversões de saúde (IMC), garantindo a validação de dados e a prevenção de erros de execução matemática.

---

##  Bibliotecas Utilizadas
* `<stdio.h>` – Responsável pelas funções padrão de entrada e saída de dados (`printf` para exibições e `scanf` para leitura dos inputs do usuário).
* `<stdlib.h>` – Fornece funções utilitárias do sistema para gerenciamento da execução do programa.
* `<math.h>` – Utilizada para operações matemáticas avançadas e funções trigonométricas (`pow`, `sqrt`, `sin`, `cos`, `tan`, `log`, `log10`, `exp`, `cbrt`, `fabs`, `hypot`).

---

##  Relação das 20 Funções Implementadas

1. **Soma (`+`):** Adição de dois números reais.
2. **Subtração (`-`):** Subtração entre dois valores.
3. **Multiplicação (`*`):** Produto de dois números.
4. **Divisão (`/`):** Razão entre dividendo e divisor (com validação para divisor zero).
5. **Potenciação (`pow`):** Elevação de uma base a um expoente fornecido.
6. **Raiz Quadrada (`sqrt`):** Cálculo de raiz com validação de domínio para números não-negativos.
7. **Resto / Módulo (`%`):** Cálculo do resto da divisão inteira entre dois números.
8. **Porcentagem:** Cálculo do valor percentual de uma quantia ($X\%$ de $Y$).
9. **Seno (`sin`):** Cálculo do seno com conversão automática do ângulo de graus para radianos.
10. **Cosseno (`cos`):** Cálculo do cosseno com conversão de graus para radianos.
11. **Tangente (`tan`):** Cálculo da tangente em graus.
12. **Logaritmo Natural (`log`):** Logaritmo na base $e$ com validação de valor maior que zero.
13. **Logaritmo Base 10 (`log10`):** Logaritmo na base 10 com restrição de domínio ($x > 0$).
14. **Exponencial (`exp`):** Cálculo da função e elevado a $x$ ($e^x$).
15. **Raiz Cúbica (`cbrt`):** Cálculo da raiz cúbica de um número real.
16. **Quadrado ($x^2$):** Multiplicação de um número por ele mesmo.
17. **Cubo ($x^3$):** Potenciação de um valor à terceira potência.
18. **Valor Absoluto (`fabs`):** Retorna o módulo (valor positivo) de um número real.
19. **Hipotenusa (`hypot`):** Aplicação do Teorema de Pitágoras a partir dos valores de dois catetos.
20. **IMC (Índice de Massa Corporal):** Cálculo da razão peso / altura² com verificação para altura maior que zero.

---

##  Conceitos de Programação Aplicados

* **Entrada e Saída de Dados:** Interação contínua via terminal utilizando `printf()` e `scanf()`.
* **Estrutura de Repetição:** Utilização do laço `while (continuar == 's' || continuar == 'S')` permitindo a execução de múltiplos cálculos até a confirmação de encerramento pelo usuário.
* **Estruturas Condicionais e Seleção:** Emprego de `switch...case` para direcionar a opção do menu e estruturas `if...else` para tratamento de fluxos de decisão.
* **Tratamento de Erros e Restrições de Domínio:** 
  * Impedimento de divisão por zero na divisão simples e no operador de resto/módulo.
  * Validação de números negativos para a Raiz Quadrada.
  * Restrição de valores menores ou iguais a zero para Logaritmos.
  * Verificação de altura válida para o cálculo do IMC.
  * Captura de opções inválidas no menu através do bloco `default`.

---

##  Instruções para Compilação e Execução

### Execução no GDB Online ou Compiladores Web
1. Acesse o [Online GDB](https://www.onlinegdb.com/).
2. Selecione a linguagem **C** no menu superior.
3. Copie todo o código do arquivo `calculadora.c` e cole no editor.
4. Clique em **Run** (ou pressione `F9`).

### Compilação Local via GCC
```bash
# Compilar o arquivo incluindo a biblioteca matemática (-lm)
gcc calculadora.c -o calculadora -lm

# Executar o programa compilado
./calculadora
