#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1[50], codigo1[4], nomeCidade1[50];
    long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Dados da Carta 2
    char estado2[50], codigo2[4], nomeCidade2[50];
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

    // Menu interativo
    int escolha;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &escolha);

    printf("\nComparando:\n");
    printf("Carta 1 - %s\n", nomeCidade1);
    printf("Carta 2 - %s\n\n", nomeCidade2);

    switch (escolha) {
        case 1: // População
            printf("População:\n");
            printf("%s: %ld habitantes\n", nomeCidade1, populacao1);
            printf("%s: %ld habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("🏆 Vencedora: %s\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("🏆 Vencedora: %s\n", nomeCidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 2: // Área
            printf("Área:\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2)
                printf("🏆 Vencedora: %s\n", nomeCidade1);
            else if (area2 > area1)
                printf("🏆 Vencedora: %s\n", nomeCidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 3: // PIB
            printf("PIB:\n");
            printf("%s: R$ %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("🏆 Vencedora: %s\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("🏆 Vencedora: %s\n", nomeCidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Pontos Turísticos:\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("🏆 Vencedora: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("🏆 Vencedora: %s\n", nomeCidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 5: // Densidade Populacional (regra invertida)
            printf("Densidade Populacional (menor vence):\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("🏆 Vencedora: %s\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("🏆 Vencedora: %s\n", nomeCidade2);
            else
                printf("🤝 Empate!\n");
            break;

        default:
            printf("❌ Opção inválida! Por favor, reinicie o programa e escolha uma opção válida (1-5).\n");
    }

    return 0;
}

