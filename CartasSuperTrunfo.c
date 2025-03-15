#include <stdio.h>
#include <locale.h>

int main() {

    //Para formatação de texto, como acentos.
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro da primeira carta.
    printf("Cadastro da primeira carta\n");

    printf("Digite o estado da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (número de 01 a 04):\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %d", &pontos_turisticos1);

    printf("\n");

    // Cadastro da segunda carta.
    printf("Cadastro da segunda carta\n");

    printf("Digite o estado da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (número de 01 a 04):\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %i", &pontos_turisticos2);

    printf("\n");

    printf("Carta: 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c%s \n", estado1, codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos:: %d \n", pontos_turisticos1);

    printf("\n");

    printf("Carta: 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos:: %d \n", pontos_turisticos2);

    return 0;
}
