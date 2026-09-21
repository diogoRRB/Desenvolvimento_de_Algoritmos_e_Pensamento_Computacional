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

### Uso da Estrutura `while`
* **Onde foi utilizado:** O comando `while` foi aplicado em dois momentos cruciais do programa:
  1. **Validação de Limites e Entradas:** Para garantir que o usuário digite valores válidos (números positivos e dentro de parâmetros lógicos) e impedir que entradas incorretas ou letras quebrem o fluxo de execução.
  2. **Loop Principal de Monitoramento:** Para manter o sistema rodando continuamente, coletando as temperaturas de forma repetitiva até que o limite de leituras consecutivas acima do permitido seja atingido ou que o operador decida encerrar.

* **Justificativa da Escolha:** 
  A escolha pelo `while` deu-se pelo fato de que o número exato de repetições (iterações) não é conhecido de antemão — ele depende exclusivamente das interações do usuário e das condições de temperatura analisadas em tempo de execução. Diferente do laço `for` (ideal para contagens fixas), o `while` oferece a flexibilidade necessária para rodar condicionalmente por tempo indeterminado e tratar erros de entrada através de re-solicitações imediatas (`scanf` com limpeza de buffer).

## Conceitos de Programação Aplicados

* **Entrada e Saída de Dados:** Uso de `printf()` e `scanf()` com verificação de retorno para interação segura com o usuário.
* **Estrutura de Repetição:** Uso do laço `while` para validações e controle de fluxo do monitoramento.
* **Estruturas de Seleção:** Implementação de `if`, `else if` e `else` para gerenciar as condições de segurança das temperaturas.
* **Limpeza de Buffer:** Uso de `getchar()` e `scanf("%*s")` para evitar loops infinitos em caso de entradas incorretas.

##  Descrição dos Resultados dos Testes

* **Teste 1 (Validação de Entradas Inválidas):** O programa barrou com sucesso caracteres alfabéticos e valores numéricos fora do padrão esperado, solicitando uma nova entrada do operador.
  
* **Teste 2 (Temperaturas Acima do Limite Não Consecutivas):** O sistema emitiu avisos de alerta térmico quando o limite foi ultrapassado isoladamente, mas zerou o contador de criticidade logo em seguida ao receber uma temperatura segura.
  
* **Teste 3 (Três Temperaturas Consecutivas e Encerramento):** O programa identificou corretamente a terceira ocorrência consecutiva acima do parâmetro crítico, acionando o protocolo de segurança para desligamento automático e exibindo o relatório estatístico final completo.


## Como Executar

### Online GDB
1. Acesse o site do Online GDB.
2. Selecione a linguagem **C**.
3. Cole o código do arquivo `monitoramento.c` e clique em **Run**.

### Terminal (GCC)
```bash
gcc monitoramento.c -o monitoramento
./monitoramento
