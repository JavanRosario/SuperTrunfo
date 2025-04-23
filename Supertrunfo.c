#include <stdio.h>  
#include <string.h>

int main()  
{   
    // Coloquei todas as variáveis aqui
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
    int populacao1 = 0, populacao2 = 0;
    int turistico1 = 0, turistico2 = 0;
    double area1 = 0, area2 = 0;
    double pib1 = 0, pib2 = 0;
    double densidade1 = 0, pibpercapita1 = 0, densidade2 = 0, pibpercapita2 = 0;

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
    scanf("%d", &populacao1);  

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
    scanf("%d", &populacao2);  

    printf("Digite a Área (em km²): ");  
    scanf("%lf", &area2); 

    printf("Digite o Produto Interno Bruto da cidade (em bilhões): ");  
    scanf("%lf", &pib2);  

    printf("Número de Pontos Turísticos: ");  
    scanf("%d", &turistico2);

    // Calculei o PIB por 1000000000 porque o meu estava mostrando somente 0.0. Essa foi a minha solução para mostrar o valor correto:
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;  // PIB em bilhões convertido para reais

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;  // PIB em bilhões convertido para reais

    // SAÍDA DE DADOS ========================
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    return 0;
}
 