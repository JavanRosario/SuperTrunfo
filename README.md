🃏 Super Trunfo de Cidades
Um jogo interativo em linguagem C no estilo Super Trunfo, onde você compara atributos de duas cidades e descobre qual vence com base no critério escolhido.

⚙️ Como Executar
Compile o código:

bash
Copiar
Editar
gcc super_trunfo.c -o super_trunfo
Execute o programa:

bash
Copiar
Editar
./super_trunfo
Siga as instruções no terminal para:

Inserir os dados das duas cidades.

Escolher um atributo para comparar.

Ver qual cidade vence!

🎮 Funcionalidades
Permite entrada dos seguintes dados para duas cidades:

Estado (char)

Código da cidade (string)

Nome da cidade (string)

População (int)

Área (double)

PIB (double em bilhões)

Pontos Turísticos (int)

Calcula automaticamente:

Densidade Populacional

PIB per Capita

Super Poder (pontuação geral da cidade com base em múltiplos atributos)

Exibe todas as informações de ambas as cidades.

Permite ao jogador escolher qual atributo deseja comparar:

1️⃣ População

2️⃣ Área

3️⃣ PIB

4️⃣ Pontos Turísticos

5️⃣ Densidade Populacional (quanto menor, melhor)

6️⃣ PIB per Capita (quanto maior, melhor)

Utiliza switch-case e if-else para lógica de comparação com possibilidade de empate.

💻 Tecnologias Utilizadas
Linguagem de Programação: C

Bibliotecas: stdio.h, string.h

👨‍🎓 Desenvolvedor
Javan Oliveira

📚 Aprendizados no Projeto
Entrada e saída de dados (scanf, printf, fgets, getchar)

Manipulação de múltiplos tipos: char, int, double, float, string

Cálculos matemáticos com dados inseridos pelo usuário

Boas práticas com o buffer de entrada (getchar() após scanf)

Uso de switch-case para criar menus interativos

Comparações condicionais com if, else if, else

Organização e clareza na estrutura do código
