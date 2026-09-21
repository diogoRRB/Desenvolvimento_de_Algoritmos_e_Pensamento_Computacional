Sistema de Monitoramento de Temperatura em C

Estudante: Diogo Ribeiro Rodrigues Braúna

Disciplina: Desenvolvimento de Algoritmos e Pensamento Computacional

Professora: Profa. Karla Sartin

Linguagem: C

## Descrição do Projeto

Este projeto consiste em um programa em linguagem C desenvolvido para monitorar a temperatura de operação de máquinas de forma contínua.
O sistema valida limites de segurança, recebe múltiplas leituras do sensor, trata entradas inválidas (incluindo misturas de números e letras), calcula estatísticas completas e protege a maquina encerrando a execução automaticamente caso sejam identificadas três leituras consecutivas acima do limite seguro.

## Funcionalidades Implementadas

* **Validação de Limite:** Solicitação e validação de um valor numérico positivo para definir o limite seguro da máquina.
* **Monitoramento Contínuo:** Entrada de diversas temperaturas com tratamento de erros de digitação.
* **Sistema de Alertas:** Mensagens específicas para temperaturas seguras, avisos de temperatura limite exata e alertas de valores acima do permitido.
* **Segurança Crítica:** Interrupção automática da execução ao detectar 3 temperaturas consecutivas acima do limite.
* **Relatório Final:** Exibição detalhada com o total de leituras, limite configurado, maior temperatura, menor temperatura, média térmica, total de leituras acima do limite e total de avisos.

## Conceitos de Programação Aplicados

* **Entrada e Saída de Dados:** Uso de `printf()` e `scanf()` com verificação de retorno para interação segura com o usuário.
* **Estrutura de Repetição:** Uso do laço `while` para validações e controle de fluxo do monitoramento.
* **Estruturas de Seleção:** Implementação de `if`, `else if` e `else` para gerenciar as condições de segurança das temperaturas.
* **Limpeza de Buffer:** Uso de `getchar()` e `scanf("%*s")` para evitar loops infinitos em caso de entradas incorretas.

## Como Executar

### Online GDB
1. Acesse o site do Online GDB.
2. Selecione a linguagem **C**.
3. Cole o código do arquivo `monitoramento.c` e clique em **Run**.

### Terminal (GCC)
```bash
gcc monitoramento.c -o monitoramento
./monitoramento
