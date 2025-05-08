# 🃏 Super Trunfo de Cidades

Um jogo de **Super Trunfo** simplificado desenvolvido em C, onde você pode comparar atributos de duas cidades para determinar qual delas "vence" de acordo com o critério escolhido.

## ⚙️ Como Executar

Para compilar e executar o programa, siga os seguintes passos:

1. Compile o código com o comando:
   ```bash
   gcc super_trunfo.c -o super_trunfo
   ```

2. Execute o programa com:
   ```bash
   ./super_trunfo
   ```

3. Siga as instruções no terminal para inserir os dados de duas cidades e realizar a comparação dos atributos.

## 🎮 Funcionalidades

- O jogo permite a inserção das informações de **duas cidades**:
  - Estado da cidade (caractere)
  - Código da cidade (string)
  - Nome da cidade (string)
  - População (inteiro)
  - Área (em km², tipo double)
  - PIB (em bilhões, tipo double)
  - Número de pontos turísticos (inteiro)
  
- O jogo **calcula automaticamente**:
  - Densidade populacional
  - PIB per capita
  - Super poder (um atributo calculado com base em várias características)

- Exibe os dados das duas cartas (cidades) inseridas e permite ao jogador escolher um atributo para comparar, como:
  - População
  - Área
  - PIB
  - Pontos turísticos
  - Densidade populacional
  - PIB per capita

- Caso o jogador opte por um critério de comparação, o programa avalia as cidades e imprime o vencedor ou um empate.

## 💻 Tecnologias Utilizadas

- **Linguagem de Programação**: C
- **Bibliotecas**:
  - `stdio.h` para entrada e saída de dados
  - `string.h` para manipulação de strings

## 👨‍🎓 Desenvolvedor

**Javan Oliveira**

## 📚 Aprendizados

- Manipulação de diferentes tipos de dados: `char`, `int`, `double`, `string`
- Cálculos de indicadores urbanos **densidade populacional** e **PIB per capita**
- Estruturação de um jogo simples com **entrada de dados**, **comparação de valores** e **exibição de resultados**
- Tratamento de buffer de entrada usando `getchar()` e `fgets()`
- Lógica de controle de fluxo com **switch** e **if-else**

## 📝 Notas

Este é um **projeto acadêmico** básico para ilustrar a entrada e saída de dados em C, com foco na manipulação de dados urbanos e a implementação de um jogo simples. O código não implementa a lógica completa do Super Trunfo, mas sim a base para comparação de atributos entre duas cidades.

---

Desenvolvido para fins educacionais.
