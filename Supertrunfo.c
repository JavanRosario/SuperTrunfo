#include <stdio.h>  
#include <string.h>

int main()  
{   
    // Coloquei todas as variáveis aqui
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
    
    int     populacao1 = 0, populacao2 = 0;
    int    turistico1 = 0, turistico2 = 0;
    
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
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibperCapita1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibperCapita2);
    // resultado das cartas
    // agora com if e else
    printf("=====================COMPARAÇÃO DE CARTAS=========================\n");
    
    printf("=====================ATRIBUTO POPULAÇÃO===========================\n");
    
    if (populacao1>populacao2){
        printf("Carta 1 venceu! %d é maior que %d\n",populacao1,populacao2);
    }
    else{
        printf("Carta 2 venceu! %d é maior que %d\n",populacao2,populacao1);
    }
    
    printf("=====================ATRIBUTO ÁREA===========================\n");
   
    if (area1>area2){
        printf("Carta 1 venceu! %.2f é maior que %.2f\n",area1,area2);
    }
    else{
        printf("Carta 2 venceu! %.2f é maior que %.2f\n",area2,area1);
    }
    printf("=====================ATRIBUTO PIB===========================\n");
   
    if (pib1>pib2){
        printf("Carta 1 venceu! %.2f é maior que %.2f\n",pib1,pib2);
    }
    else{
        printf("Carta 2 venceu! %.2f é maior que %.2f\n",pib2,pib1);
    }
    printf("=====================ATRIBUTO PONTO TURÍSTICO===========================\n");
   
    if (turistico1>turistico2){
        printf("Carta 1 venceu! %d é maior que %d\n",turistico1,turistico2);
    }
    else{
        printf("Carta 2 venceu! %d é maior que %d\n",turistico2,turistico1);
    }
    printf("=====================ATRIBUTO DENSIDADE POLULACIONAL===========================\n");
   
    if (densidade1<densidade2){
        printf("Carta 1 venceu! %.2f é MENOR que %.2f\n",densidade1,densidade2);
    }
    else{
        printf("Carta 2 venceu! %.2f é MENOR que %.2f\n",densidade2,densidade1);
    }
    printf("=====================ATRIBUTO PIB PERCAPTA===========================\n");
   
    if (pibperCapita1>pibperCapita2){
        printf("Carta 1 venceu! %.2f é MENOR que %.2f\n",pibperCapita1,pibperCapita2);
    }
    else{
        printf("Carta 2 venceu! %.2f é MENOR que %.2f\n",pibperCapita2,pibperCapita1);
    }
    return 0;
}
 