#include <stdio.h>  
#include <string.h>

int main()  
{   
    // Coloquei todas as variáveis aqui
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
    
    unsigned long int  populacao1 = 0, populacao2 = 0;
    unsigned long int  turistico1 = 0, turistico2 = 0;
    
    double area1 = 0, area2 = 0;
    double pib1 = 0, pib2 = 0;
    double densidade1 = 0, pibperCapita1 = 0, densidade2 = 0, pibperCapita2 = 0;

     float superPoder1 = 0, superPoder2 = 0;

    // CARTA 1 
    printf("CARTA: 1\n");  
    printf("Estado: ");  
    scanf(" %c", &estado1);  // espaço antes de %c para ignorar enter anterior

    printf("Código: ");  
    scanf("%s", codigo1);   

    getchar();  // Procedimento para ler strings após o espaço
    printf("Nome da cidade: ");  
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Tamanho da População: ");  
    scanf("%lu", &populacao1);  

    printf("Digite a Área (em km²): ");  
    scanf("%lf", &area1); 

    printf("Digite o Produto Interno Bruto da cidade (em bilhões): ");  
    scanf("%lf", &pib1);  

    printf("Número de Pontos Turísticos: ");  
    scanf("%d", &turistico1);

    // CARTA 2
    printf("CARTA 2:\n");  
    printf("Estado: ");  
    scanf(" %c", &estado2);  

    printf("Código: ");  
    scanf("%s", codigo2);   

    getchar();
    printf("Nome da cidade: ");  
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Tamanho da População: ");  
    scanf("%lu", &populacao2);  

    printf("Digite a Área (em km²): ");  
    scanf("%lf", &area2); 

    printf("Digite o Produto Interno Bruto da cidade (em bilhões): ");  
    scanf("%lf", &pib2);  

    printf("Número de Pontos Turísticos: ");  
    scanf("%d", &turistico2);

    // Calculei o PIB por 1000000000 porque o meu estava mostrando somente 0.0. Essa foi a minha solução para mostrar o valor correto:
    densidade1 = (double)populacao1 / area1; //fiz o push para double, não estava lendo direito
    pibperCapita1 = (pib1 * 1000000000) / populacao1;  // PIB em bilhões convertido para reais

    densidade2 = (double)populacao2 / area2;
    pibperCapita2 = (pib2 * 1000000000) / populacao2;  // PIB em bilhões convertido para reais
    
    superPoder1 = populacao1 + area1 + pib1 + turistico1 + pibperCapita1 + (area1 / populacao1);// calculo do super poder
    superPoder2 = populacao2 + area2 + pib2 + turistico2 + pibperCapita2 + (area2 / populacao2);

    // SAÍDA DE DADOS ========================
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);    
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %lu\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibperCapita1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %lu\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibperCapita2);
    // resultado das cartas
    printf("=====================COMPARAÇÃO DE CARTAS=========================\n");
    printf("População: A carta 1 VENCEU?: %d\n",(populacao1>populacao2));
    printf("Área: A carta 1 VENCEU?: %d\n",(area1 > area2));
    printf("PIB: A carta 1 VENCEU?: %d\n" , (pib1 > pib2));
    printf("Pontos Turísticos: A carta um VENCEU?: %d\n",(turistico1 > turistico2));
    printf("Densidade Populacional: A carta 1 VENCEU?: %d\n",(densidade1 < densidade2));
    printf("PIB per Capta: A carta 1 VENCEU?: %d\n",(pibperCapita1 > pibperCapita2));
    printf("Superpoder: A carta 1 venceu?: %d\n",(superPoder1>superPoder2));
    return 0;
}
 