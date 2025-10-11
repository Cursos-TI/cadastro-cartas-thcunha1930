#include <stdio.h>

int main ()

{
    char  estado1[50] = "Distrito Federal";
    char  codigo1[10] = "A01";
    char  nome1[50] = "BRASLIA";
    int   populacao1 = 2817381; 
    float area1 = 5760;
    float pib1 = 265847334;
    int   npt1 = 20; // numero dos pontos turisticos
    float per1; // PIB percapta 
    float den1; // densidade 
    float super1; // super poder 
   
   
    char  estado2[50] = "Tocantins";
    char  codigo2[10] = "B02";
    char  nome2[50] = "Palmas";
    int   populacao2 = 306296;
    float area2 = 2218.0;
    float pib2 = 15960000.0;
    int   npt2 = 15;// numero dos pontos turisticos 
    float per2; // PIB percapta 
    float den2; // densidade 
    float super2; // super poder 

    int opcao; // variavel usado no menu 



      


    

   // calculo de densidade e pib percapta mais super poder das duas cartas 
  
  
    den1 = populacao1 / area1;
    den2 = populacao2 / area2;
    per1 = pib1 / populacao1;
    per2 = pib2 / populacao2;
    super1 = populacao1 + area1 + pib1 + npt1 + per1 + (1.0/den1);
    super2 = populacao2 + area2 + pib2 + npt2 + per2 + (1.0/den2);

   
   
    printf("\n=== Cartas cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s", codigo1);
    printf("Cidade: %s", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Sua densidade e de: %.2f\n", den1);
    printf("Seu PIB percapta e de: %.2f\n", per1);
    printf("Seu super poder e: %.2f\n", super1);


  
  
  
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s", codigo2);
    printf("Cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Sua densidade e de: %.2f\n", den2);
    printf("Seu PIB percapta e de: %.2f\n", per2);
    printf("Seu super poder e: %.2f\n", super2);



// Comparações
printf("===== SUPER TRUNFO - DESAFIO INTERMEDIÁRIO =====\n\n");
    printf("Carta 1: %s (%s)\n", nome1, codigo1);
    printf("Carta 2: %s (%s)\n\n", nome2, codigo2);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &opcao);

    printf("\n==============================================\n");

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões de dólares\n", nome1, pib1);
            printf("%s: %.2f bilhões de dólares\n", nome2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo escolhido: Número de pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", nome1, npt1);
            printf("%s: %d pontos turísticos\n", nome2, npt2);

            if (npt1 > npt2)
                printf("Vencedor: %s\n", nome1);
            else if (npt2 > npt1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome1, den1);
            printf("%s: %.2f hab/km²\n", nome2, den2);

            // Regra invertida: menor densidade vence
            if (den1 < den2)
                printf("Vencedor: %s\n", nome1);
            else if (den2 < den1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    printf("==============================================\n");
    return 0;
}