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
    printf("Cadastro da primeira carta:\n");
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
    printf("\nCadastro da segunda carta:\n");
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

    //Separador para mostrar as cartas
    printf("\n --- CARTAS ---\n");

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Comparações
    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");

    int resultado;

    resultado = populacao1 > populacao2 ? 1 : 0;
    printf("População: Carta %d venceu (%d)\n", resultado == 1 ? 1 : 2, resultado);

    resultado = area1 > area2 ? 1 : 0;
    printf("Área: Carta %d venceu (%d)\n", resultado == 1 ? 1 : 2, resultado);

    resultado = pib1 > pib2 ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", resultado == 1 ? 1 : 2, resultado);

    resultado = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado == 1 ? 1 : 2, resultado);

    resultado = densidade1 < densidade2 ? 1 : 0; // menor densidade vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado == 1 ? 1 : 2, resultado);

    resultado = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado == 1 ? 1 : 2, resultado);

    // Cálculo do Super Poder
    float super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + (1.0 / densidade1) + pib_per_capita1;
    float super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + (1.0 / densidade2) + pib_per_capita2;

    resultado = super_poder1 > super_poder2 ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado == 1 ? 1 : 2, resultado);

    return 0;
}
