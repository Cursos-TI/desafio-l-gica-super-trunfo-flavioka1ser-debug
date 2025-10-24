#include <stdio.h>

int main() {
    //Cadastro das Cartas
    char nome1[50] = "São Paulo"; // Nome da cidade
    int populacao1 = 46000000; // em habitantes
    int area1 = 248000; // em km²
    int pib1 = 2500000; // PIB de reais

    char nome2[50] = "Rio de Janeiro"; // Nome da cidade
    int populacao2 = 17300000; // em habitantes
    int area2 = 43700; // em km²
    int pib2 = 800000; // PIB de reais

    int escolha1, escolha2;
    int valor1A, valor2A, valor1B, valor2B;

    printf("Estados disponíveis:\n");
    printf("1. %s\n", nome1);
    printf("2. %s\n", nome2);

    //Menu de escolha dos atributos
    printf("\nEscolha o Primeiro Atributo para Comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n");
    scanf("%d", &escolha1);

    printf("Escolha o Segundo Atributo para Comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n");
    scanf("%d", &escolha2);

    //Atribuição do primeiro atributo escolhido
    switch(escolha1) {
        case 1:
            valor1A = populacao1;
            valor2A = populacao2;
            break;
        case 2:
            valor1A = area1;
            valor2A = area2;
            break;
        case 3:
            valor1A = pib1;
            valor2A = pib2;
            break;
        default:
            printf("Escolha inválida para o primeiro atributo.\n");
            return 1;
    }

    //Atribuição do segundo atributo escolhido
    switch(escolha2) {
        case 1:
            valor1B = populacao1;
            valor2B = populacao2;
            break;
        case 2:
            valor1B = area1;
            valor2B = area2;
            break;
        case 3:
            valor1B = pib1;
            valor2B = pib2;
            break;
        default:
            printf("Escolha inválida para o segundo atributo.\n");
            return 1;
    }

    //Comparação dos atributos escolhidos
    printf("\nComparação dos Atributos Escolhidos:\n");
    if(valor1A > valor2A) {
        printf("%s vence no primeiro atributo escolhido.\n", nome1);
    } else if(valor1A < valor2A) {
        printf("%s vence no primeiro atributo escolhido.\n", nome2);
    } else {
        printf("Empate no primeiro atributo escolhido.\n");
    }

    //Comparação do segundo atributo escolhido
    if(valor1B > valor2B) {
        printf("%s vence no segundo atributo escolhido.\n", nome1);
    } else if(valor1B < valor2B) {
        printf("%s vence no segundo atributo escolhido.\n", nome2);
    } else {
        printf("Empate no segundo atributo escolhido.\n");
    }

    return 0; 
}