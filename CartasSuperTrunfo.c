#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[50], codigo1[4], nomeCidade1[50];
    long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Dados da Carta 2
    char estado2[40], codigo2[4], nomeCidade2[50];
    long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("\nDigite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf(" %ld", &populacao1);

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado2);

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf(" %ld", &populacao2);

    printf("Área (km²): ");
    scanf(" %f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    // Comparativo
    int pontosCarta1 = 0, pontosCarta2 = 0;

    if (populacao1 > populacao2) pontosCarta1++; else pontosCarta2++;
    if (area1 > area2) pontosCarta1++; else pontosCarta2++;
    if (pib1 > pib2) pontosCarta1++; else pontosCarta2++;
    if (densidadePopulacional1 > densidadePopulacional2) pontosCarta1++; else pontosCarta2++;
    if (pibPerCapita1 > pibPerCapita2) pontosCarta1++; else pontosCarta2++;
    if (pontosTuristicos1 > pontosTuristicos2) pontosCarta1++; else pontosCarta2++;

    printf("\n=== Resultado da Comparação ===\n");
    printf("Carta 1 venceu em %d atributos.\n", pontosCarta1);
    printf("Carta 2 venceu em %d atributos.\n", pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {
        printf("🏆 A Vencedora é a Carta 1: %s\n", nomeCidade1);
    } else if (pontosCarta2 > pontosCarta1) {
        printf("🏆 A Vencedora é a Carta 2: %s\n", nomeCidade2);
    } else {
        printf("🤝 Empate entre as duas cartas!\n");
    }

    return 0;
}
 
