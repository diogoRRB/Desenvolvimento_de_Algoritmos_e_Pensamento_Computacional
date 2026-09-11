# Conversor de Temperatura em C

**Estudante:** Diogo Ribeiro Rodrigues Braúna  
**Disciplina:** Desenvolvimento de Algoritmos e Pensamento Computacional  
**Linguagem:** C  

---

##  Descrição do Projeto
Este projeto consiste em um programa em linguagem C desenvolvido para realizar a conversão de unidades de temperatura entre as três principais escalas utilizadas mundialmente: Celsius (°C), Fahrenheit (°F) e Kelvin (K).

---

## ⚙️ Funcionalidades Implementadas

1. **Celsius para Fahrenheit:** $F = (C \times 1.8) + 32$
2. **Fahrenheit para Celsius:** $C = \frac{F - 32}{1.8}$
3. **Kelvin para Fahrenheit:** $F = (K \times 1.8) - 459.67$
4. **Fahrenheit para Kelvin:** $K = \frac{(F - 32) \times 5}{9} + 273.15$
5. **Celsius para Kelvin:** $K = C + 273.15$
6. **Kelvin para Celsius:** $C = K - 273.15$
0. **Sair:** Encerra a execução do programa.

---

##  Conceitos de Programação Aplicados

* **Entrada e Saída de Dados:** Uso de `printf()` e `scanf()` para interação direta com o usuário via terminal.
* **Estruturas de Seleção:** Implementação de `switch...case` para gerenciar as opções do menu e bloco `default` para tratamento de opções inválidas.
* **Manipulação de Variáveis de Ponto Flutuante:** Uso do tipo `double` para garantir alta precisão nos cálculos de temperatura.

---

##  Como Executar

### Online GDB
1. Acesse o [Online GDB](https://www.onlinegdb.com/).
2. Selecione a linguagem **C**.
3. Cole o código do arquivo `conversor.c` e clique em **Run**.

### Terminal (GCC)
```bash
gcc conversor.c -o conversor
./conversor
