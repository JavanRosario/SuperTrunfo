#include <stdio.h>  
#include <string.h>
int main()  
{   // variaveis 
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
    int populacao1 = 0, populacao2 = 0;
    int turistico1 = 0, turistico2 = 0;
    double area1 = 0, area2 = 0;
    float pib1 = 0, pib2 = 0;
    //CARTA 1 
    printf("CARTA: 1\n");  
    
    printf("Estado:");  
    scanf("%c",&estado1);  
    
    printf("Código:");  
    scanf("%s",codigo1);   
    
    getchar();//Procedimento para ler strings após o espaço
    printf("Nome da cidade:");  
    fgets(cidade1,sizeof(cidade1),stdin);
    cidade1[strcspn(cidade1,"\n")]=0;
    
    printf("Tamanho da População:");  
    scanf("%d",&populacao1);  
    
    printf("Digite a Área (em km²):");  
    scanf("%lf",&area1); 
    
    printf("Digite o Produto Interno Bruto da cidade:");  
    scanf("%f",&pib1);  
    
    printf("Número de Pontos Turísticos:");  
    scanf("%d",&turistico1);
    //===================================================================================
    //CARTA 2
    printf("CARTA 2:\n");  
    
    printf("Estado:");  
    getchar();
    scanf("%c",&estado2);  
    
    printf("Código:");  
    scanf("%s",codigo2);   
    
    getchar();
    printf("Nome da cidade:");  
    fgets(cidade2,sizeof(cidade2),stdin);
    cidade2[strcspn(cidade2,"\n")]=0;
    
    printf("Tamanho da População:");  
    scanf("%d",&populacao2);  
    
    printf("Digite a Área (em km²):");  
    scanf("%lf",&area2); 
    
    printf("Digite o Produto Interno Bruto da cidade:");  
    scanf("%f",&pib2);  
    
    printf("Número de Pontos Turísticos:");  
    scanf("%d",&turistico2);
    //SAÍDA DE DADOS==============================
    printf("CARTA 1:\n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",cidade1);
    printf("População: %d \n",populacao1);
    printf("Área: %.2f Km2 \n",area1);
    printf("PIB: %.2f Bilhoes de reais \n",pib1);
    printf("Número de pontos turísticos: %d \n",turistico1);

    printf("CARTA 2:\n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("População: %d \n",populacao2);
    printf("Área: %2.f Km2 \n",area2);
    printf("PIB: %2.f Bilhoes de reais \n",pib2);
    printf("Número de pontos turísticos: %d \n",turistico2);
    return 0;
} 

 