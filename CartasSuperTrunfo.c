#include <stdio.h>

int main(){
            
    printf("Carta01 \n");
            
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("*** DIGITE OS DADOS DA CARTA01 ***\n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Codigo da carta (A01, B02): ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("***DIGITE OS DADOS DA CARTA02***\n");
    printf("Estado (A-H): ");
    scanf("%c\n", &estado2);

    printf("Codigo da carta (A01, B02): ");
    scanf("%s\n", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s\n", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f km²\n", area1);
    printf("Pib: %.2f Bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f km²\n", area2);
    printf("Pib: %.2f Bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    

    return 0;






}
