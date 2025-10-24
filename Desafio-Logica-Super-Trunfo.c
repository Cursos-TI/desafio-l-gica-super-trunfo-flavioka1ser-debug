#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int populacao1 = 12325000, populacao2 = 6748000;
    int pontos1 = 50, pontos2 = 30;
    float area1 = 1521.11;
    float area2 = 1200.25;
    float pib1 = 699.28;
    float pib2 = 300.50;
    char estado1 = 'A', estado2 = 'B';
    char carta1[20] = "Carta 1", carta2[20] = "Carta 2";
    char nome1[20] = "São Paulo", nome2[20] = "Rio de Janeiro";
    char codigo1[10] = "A01", codigo2[10] = "B02";
    float superpoder1 = 12.32;
    float superpoder2 = 6.74;
    int resultado1 = populacao1 + pontos1 + area1 + pib1 + superpoder1;
    int resultado2 = populacao2 + pontos2 + area2 + pib2 + superpoder2;


    printf("%s\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", (float)populacao1 / area1);
    printf("PIB per capita: %.2f reais\n", (pib1 * 1000000000) / populacao1);
    printf("Superpoder: %.2f\n", superpoder1);
    printf("Resultado Total da Carta 1: %d\n", resultado1);

    printf("\n%s\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", (float)populacao2 / area2);
    printf("PIB per capita: %.2f reais\n", (pib2 * 1000000000) / populacao2);
    printf("Superpoder: %.2f\n", superpoder2);  
    printf("Resultado Total da Carta 2: %d\n", resultado2);

    
    printf("\nComparações entre as duas Cartas:\n");
    printf("População Carta 1 Venceu: %d\n", populacao1 > populacao2);
    printf("Área Carta 1 Venceu: %d\n", area1 > area2);
    printf("PIB Carta 1 Venceu: %d\n", pib1 > pib2);
    printf("Pontos Turísticos Carta 1 Venceu: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional Carta 1 Venceu: %d\n", (float)populacao1 / area1 > (float)populacao2 / area2);
    printf("PIB per capita Carta 1 Venceu: %d\n", (pib1 * 1000000000) / populacao1 > (pib2 * 1000000000) / populacao2);
    printf("Superpoder Carta 1 Venceu: %d\n", superpoder1 > superpoder2);
 

    if (resultado1 > resultado2) {
        printf("\nCarta 1 é a vencedora!\n");
    } else if (resultado1 < resultado2) {
        printf("\nCarta 2 é a vencedora!\n");
    } else {
        printf("\nAs duas cartas empataram!\n");
    }



    return 0;
}