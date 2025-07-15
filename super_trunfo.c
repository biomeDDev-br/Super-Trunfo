#include <stdio.h>

int main() {
    // Variáveis para as cartas
    unsigned long pop1, pop2;
    int pontos_Tur1, pontos_Tur2;
    float area1, pib1, area2, pib2;
    char estado1, estado2;
    int cidade1, cidade2;
    
    // Atributos calculados
    float densidade1, pib_Percapita1, super_poder1;
    float densidade2, pib_Percapita2, super_poder2;

    // Entrada da primeira carta
    printf("Digite a Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Cidade (1-4): ");
    scanf("%d", &cidade1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (R$): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_Tur1);

    // Cálculos para carta 1
    densidade1 = (float)pop1 / area1;
    pib_Percapita1 = pib1 * 1000000 / pop1;
    super_poder1 = pop1 + area1 + pib1 + pontos_Tur1 + (1/densidade1) + pib_Percapita1;

    // Entrada da segunda carta
    printf("\nDigite a Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Cidade (1-4): ");
    scanf("%d", &cidade2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (R$): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_Tur2);

    // Cálculos para carta 2
    densidade2 = (float)pop2 / area2;
    pib_Percapita2 = pib2 * 1000000 / pop2;
    super_poder2 = pop2 + area2 + pib2 + pontos_Tur2 + (1/densidade2) + pib_Percapita2;

    // Exibição das cartas (mantida igual)
    printf("\n=== CARTA %c%02d ===\n", estado1, cidade1);
    printf("População: %lu hab\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: US$ %.2f mi\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_Tur1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_Percapita1);
    printf("SUPER PODER: %.2f\n", super_poder1);

    printf("\n=== CARTA %c%02d ===\n", estado2, cidade2);
    printf("População: %lu hab\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f mi\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_Tur2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_Percapita2);
    printf("SUPER PODER: %.2f\n", super_poder2);

    // Comparação 
    printf("\n=== RESULTADOS DA COMPARAÇÃO ===\n");
    
    // População
    printf("População: %s (%d)\n", 
           pop1 > pop2 ? "Carta 1 venceu" : "Carta 2 venceu",
           pop1 > pop2 ? 1 : 0);
    
    // Área
    printf("Área: %s (%d)\n", 
           area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu",
           area1 > area2 ? 1 : 0);
    
    // PIB
    printf("PIB: %s (%d)\n", 
           pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu",
           pib1 > pib2 ? 1 : 0);
    
    // Pontos Turísticos
    printf("Pontos Turísticos: %s (%d)\n", 
           pontos_Tur1 > pontos_Tur2 ? "Carta 1 venceu" : "Carta 2 venceu",
           pontos_Tur1 > pontos_Tur2 ? 1 : 0);
    
    // Densidade (lógica invertida)
    printf("Densidade Populacional: %s (%d)\n", 
           densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu",
           densidade1 < densidade2 ? 1 : 0);
    
    // PIB per capita
    printf("PIB per Capita: %s (%d)\n", 
           pib_Percapita1 > pib_Percapita2 ? "Carta 1 venceu" : "Carta 2 venceu",
           pib_Percapita1 > pib_Percapita2 ? 1 : 0);
    
    // Super Poder
    printf("\nSuper Poder: %s (%d)\n", 
           super_poder1 > super_poder2 ? "Carta 1 venceu" : "Carta 2 venceu",
           super_poder1 > super_poder2 ? 1 : 0);

    return 0;
}