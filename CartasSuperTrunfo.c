#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

// Estrutura de uma carta de país
struct Carta {
    char nome[50];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};

void exibirMenuAtributos(int opcaoIgnorada) {
    printf("\nEscolha um atributo:\n");
    if (opcaoIgnorada != 1) printf("1. População\n");
    if (opcaoIgnorada != 2) printf("2. Área\n");
    if (opcaoIgnorada != 3) printf("3. PIB\n");
    if (opcaoIgnorada != 4) printf("4. Pontos Turísticos\n");
    if (opcaoIgnorada != 5) printf("5. Densidade Demográfica\n");
}

float obterValorAtributo(struct Carta carta, int opcao) {
    switch(opcao) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return carta.pontosTuristicos;
        case 5: return carta.densidadeDemografica;
        default: return -1;
    }
}

char* obterNomeAtributo(int opcao) {
    switch(opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int main() {
    struct Carta carta1 = {"Brasil", 213.3, 8516.0, 1.84, 50, 25.0};
    struct Carta carta2 = {"Argentina", 45.4, 2780.0, 0.49, 30, 16.3};

    int escolha1 = 0, escolha2 = 0;

    // Escolha do primeiro atributo
    do {
        printf("\n--- Comparação de Cartas ---\n");
        exibirMenuAtributos(0);
        printf("Escolha o primeiro atributo (1-5): ");
        scanf("%d", &escolha1);
        if (escolha1 < 1 || escolha1 > 5)
            printf("Opção inválida. Tente novamente.\n");
    } while (escolha1 < 1 || escolha1 > 5);

    // Escolha do segundo atributo
    do {
        exibirMenuAtributos(escolha1);
        printf("Escolha o segundo atributo (1-5): ");
        scanf("%d", &escolha2);
        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1)
            printf("Opção inválida. Tente novamente.\n");
    } while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1);

    // Obter valores
    float valor1Attr1 = obterValorAtributo(carta1, escolha1);
    float valor2Attr1 = obterValorAtributo(carta2, escolha1);
    float valor1Attr2 = obterValorAtributo(carta1, escolha2);
    float valor2Attr2 = obterValorAtributo(carta2, escolha2);

    // Comparações individuais (respeitando exceção da densidade demográfica)
    int ponto1 = 0, ponto2 = 0;
    ponto1 += (escolha1 == 5) ? (valor1Attr1 < valor2Attr1) : (valor1Attr1 > valor2Attr1);
    ponto2 += (escolha1 == 5) ? (valor2Attr1 < valor1Attr1) : (valor2Attr1 > valor1Attr1);
    ponto1 += (escolha2 == 5) ? (valor1Attr2 < valor2Attr2) : (valor1Attr2 > valor2Attr2);
    ponto2 += (escolha2 == 5) ? (valor2Attr2 < valor1Attr2) : (valor2Attr2 > valor1Attr2);

    // Soma dos atributos (para desempate ou vitória)
    float soma1 = valor1Attr1 + valor1Attr2;
    float soma2 = valor2Attr1 + valor2Attr2;

    // Exibição dos resultados
    printf("\n=== Resultado da Comparação ===\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("%s: %.2f\n", obterNomeAtributo(escolha1), valor1Attr1);
    printf("%s: %.2f\n", obterNomeAtributo(escolha2), valor1Attr2);
    printf("Soma: %.2f\n\n", soma1);

    printf("Carta 2: %s\n", carta2.nome);
    printf("%s: %.2f\n", obterNomeAtributo(escolha1), valor2Attr1);
    printf("%s: %.2f\n", obterNomeAtributo(escolha2), valor2Attr2);
    printf("Soma: %.2f\n\n", soma2);

    // Resultado final
    printf("Resultado Final: ");
    (soma1 > soma2) ? printf("Venceu %s!\n", carta1.nome) :
    (soma2 > soma1) ? printf("Venceu %s!\n", carta2.nome) :
    printf("Empate!\n");

    return 0;
}


