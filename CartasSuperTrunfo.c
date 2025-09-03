#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[20], estado2[20];
    char codigo1[4], codigo2[4];
    char resultado[30];
    char cidade1[10], cidade2[10];
    int populacao1, populacao2;
    float km1, km2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Entrada dos dados da carta 1
    printf("CARTA 1: Escreva uma letra entre 'A' ou 'B': ");
    scanf("%s", estado1);
    
    printf("Codigo: ");
    scanf("%s", codigo1);
    
    printf("Cidade: ");
    scanf("%s", cidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);

    printf("Km²: ");
    scanf("%f", &km1);

    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados da carta 2
    printf("\nCARTA 2: Escreva uma letra entre 'A' ou 'B': ");
    scanf("%s", estado2);
    
    printf("Codigo: ");
    scanf("%s", codigo2);
    
    printf("Cidade: ");
    scanf("%s", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Km²: ");
    scanf("%f", &km2);

    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Impressão dos dados da Carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    sprintf(resultado, "%s%s", estado1, codigo1);
    printf("Resultado: %s\n", resultado);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Km²: %.2f km²\n", km1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Impressão dos dados da Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    sprintf(resultado, "%s%s", estado2, codigo2);
    printf("Resultado: %s\n", resultado);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Km²: %.2f km²\n", km2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
