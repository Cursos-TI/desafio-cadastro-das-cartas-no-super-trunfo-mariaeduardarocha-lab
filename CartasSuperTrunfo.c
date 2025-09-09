#include <stdio.h>

 //programa para cadastro e exibição de cartas do super trunfo.
 
int main() {
    printf("Ciando as cartas do Super Trunfo\n");
    printf("\n");

    //declaração das variáveis carta 1:

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float pib1;
    float area1;
    int pontosturisticos1;


    //entrada de informações carta 1:

    printf("Carta 1:\n");

    printf("Digite o Estado (A-H)):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (mesma letra do estado + 01-04, ex.:G02):\n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em KM²:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosturisticos1);    

    //declaração das variáveis carta 2:

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float pib2;
    float area2;
    int pontosturisticos2;


    //entrada de informações carta 2:

    printf("Carta 2:\n");

    printf("Digite o Estado (A-H)):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (mesma letra do estado + 01-04, ex.:G02):\n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em KM²:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosturisticos2);    

    //saída de informações carta1:

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f KM²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("\n");
    
    //saída de informações carta2:

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f KM²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);



    return 0;

}