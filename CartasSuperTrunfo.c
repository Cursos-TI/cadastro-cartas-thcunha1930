#include <stdio.h>

int main() {
    // Carta 1
    char estado1[50] = "Distrito Federal";
    char codigo1[10] = "A01";
    char nome1[50] = "BRASÍLIA";
    int populacao1 = 2817381; 
    float area1 = 5760.0;
    float pib1 = 265847334.0;
    int npt1 = 20; 
    float den1; 

    // Carta 2
    char estado2[50] = "Tocantins";
    char codigo2[10] = "B02";
    char nome2[50] = "Palmas";
    int populacao2 = 306296;
    float area2 = 2218.0;
    float pib2 = 15960000.0;
    int npt2 = 15; 
    float den2; 

    // Calculando densidade
    den1 = populacao1 / area1;
    den2 = populacao2 / area2;

    int atr1, atr2;
    float valor1_card1, valor1_card2;
    float valor2_card1, valor2_card2;
    float pontuacao1 = 0, pontuacao2 = 0;

    printf("===== SUPER TRUNFO - COMPARAÇÃO AVANÇADA =====\n\n");

    printf("Carta 1: %s (%s)\n", nome1, codigo1);
    printf("Carta 2: %s (%s)\n\n", nome2, codigo2);

    // Menu do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &atr1);

    // Menu do segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atr1 != 1) printf("1 - População\n");
    if (atr1 != 2) printf("2 - Área\n");
    if (atr1 != 3) printf("3 - PIB\n");
    if (atr1 != 4) printf("4 - Pontos turísticos\n");
    if (atr1 != 5) printf("5 - Densidade demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &atr2);

    // Valores do primeiro atributo
    switch (atr1) {
        case 1: valor1_card1 = populacao1; valor1_card2 = populacao2; break;
        case 2: valor1_card1 = area1; valor1_card2 = area2; break;
        case 3: valor1_card1 = pib1; valor1_card2 = pib2; break;
        case 4: valor1_card1 = npt1; valor1_card2 = npt2; break;
        case 5: valor1_card1 = den1; valor1_card2 = den2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Valores do segundo atributo
    switch (atr2) {
        case 1: valor2_card1 = populacao1; valor2_card2 = populacao2; break;
        case 2: valor2_card1 = area1; valor2_card2 = area2; break;
        case 3: valor2_card1 = pib1; valor2_card2 = pib2; break;
        case 4: valor2_card1 = npt1; valor2_card2 = npt2; break;
        case 5: valor2_card1 = den1; valor2_card2 = den2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Comparando primeiro atributo
    if (atr1 == 5) { // densidade: menor vence
        if (valor1_card1 < valor1_card2) pontuacao1 += 1;
        else if (valor1_card2 < valor1_card1) pontuacao2 += 1;
    } else {
        if (valor1_card1 > valor1_card2) pontuacao1 += 1;
        else if (valor1_card2 > valor1_card1) pontuacao2 += 1;
    }

    // Comparando segundo atributo
    if (atr2 == 5) { // densidade: menor vence
        if (valor2_card1 < valor2_card2) pontuacao1 += 1;
        else if (valor2_card2 < valor2_card1) pontuacao2 += 1;
    } else {
        if (valor2_card1 > valor2_card2) pontuacao1 += 1;
        else if (valor2_card2 > valor2_card1) pontuacao2 += 1;
    }

    // Exibição detalhada
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    printf("Atributo 1: ");
    switch(atr1){
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("%s: %.2f\n%s: %.2f\n", nome1, valor1_card1, nome2, valor1_card2);

    printf("\nAtributo 2: ");
    switch(atr2){
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
    }
    printf("%s: %.2f\n%s: %.2f\n", nome1, valor2_card1, nome2, valor2_card2);

    // Resultado final
    printf("\nPontuação:\n%s: %.0f\n%s: %.0f\n", nome1, pontuacao1, nome2, pontuacao2);

    if (pontuacao1 > pontuacao2) printf("Vencedor: %s\n", nome1);
    else if (pontuacao2 > pontuacao1) printf("Vencedor: %s\n", nome2);
    else printf("Empate!\n");

    return 0;
}
