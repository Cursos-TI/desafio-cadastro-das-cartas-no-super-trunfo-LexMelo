#include <stdio.h>
int main() {
    // cidade 1
    char estado1[50];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // cidade 2
    char estado2[40];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    
    // Cadastro das Cartas:
    printf("\nDigite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado1);
    
    printf("Código da Carta (ex: A01): \n");
    scanf(" %s", codigo1);
    
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade1);
    
    printf("População: \n");
    scanf(" %d", &populacao1);
    
    printf("Área (km²): \n");
    scanf(" %f", &area1);
    
    printf("PIB (bilhões de reais): \n");
    scanf(" %f", &pib1);
    
    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos1);
    
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado2);
    
    printf("Código da Carta (ex: A01): \n");
    scanf(" %s", codigo2);
    
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("População: \n");
    scanf(" %d", &populacao2);
    
    printf("Área (km²): \n");
    scanf(" %f", &area2);
    
    printf("PIB (bilhões de reais): \n");
    scanf(" %f", &pib2);
    
    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    printf("\nCarta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\nCarta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}