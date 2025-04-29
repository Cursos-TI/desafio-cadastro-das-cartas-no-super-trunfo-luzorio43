#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[50], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    // Declaração de variáveis para a segunda carta
    char estado2[50], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição das cartas cadastradas
    printf("\n--- CARTAS CADASTRADAS ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);

    // --- Comparação baseada em População ---
    printf("\n--- COMPARAÇÃO DE CARTAS (Atributo: População) ---\n");

    // Mostrar os valores antes do resultado
    printf("\nCarta 1 - %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);

    // Comparação usando if / else
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate! As duas cartas têm a mesma população.\n");
    }

    return 0;
}
