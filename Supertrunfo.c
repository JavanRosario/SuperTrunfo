#include <stdio.h>  

 

int main()  

{   // variaveis 

    char estado1,estado2 [2]; //2 para também contar o "ENTER" como string  

    char codigo1[10], codigo2[10];        

    char cidade1[20], cidade2[20]; 

    int populacao1 = 0, populacao2 = 0, turistico1 = 0, turistico2 = 0; 

    float area1 = 0, area2 = 0, pib1 = 0, pib2 = 0;   

    //CARTA 1 

    printf("CARTA 1");  

    printf("estado:\n");  

    scanf("%c",&estado1);  

    printf("Digite o código da carta:\n");  

    scanf("%s",codigo1);     

    printf("Digite o nome da cidade:");  

    scanf("%s",cidade1);  

    printf("Digite o tamanho da população:");  

    scanf("%d",&populacao1);  

    printf("Digite a Área (em km²)");  

    scanf("%f",&area1);  

    printf("Digite o Produto Interno Bruto da cidade");  

    scanf("%f",&pib1);  

    printf("Número de Pontos Turísticos:");  

} 

 