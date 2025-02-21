#include <stdio.h>

int main(){
            
    printf("Carta01 \n");
            
    char estado1;
    char codigo1[5];
    char cidade1[50];
    float populacao1;
    float area1;
    float pib1;
    float pontos_turisticos1;

    printf("*** DIGITE OS DADOS DA CARTA01 ***\n");
    printf("Estado (A-H): \n");
    scanf("%c", &estado1);

    printf("Codigo da carta (A01, B01): \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%f", populacao1);

    printf("Área em km²: \n");
    scanf("%f", area1);

    printf("Pib: \n");
    scanf("%f", pib1);
    printf("Pontos Turisticos: \n");
    scanf("%i", pontos_turisticos1);

    printf("Carta02 \n");

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    

    return 0;






}
