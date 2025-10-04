#include <stdio.h>

int main ()

{
    char  estado1;
    char  codigo1[10];
    char  nome1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   npt1; // numero dos pontos turisticos
    float per1; // PIB percapta 
    float den1; // densidade 
    
   
   
    char  estado2;
    char  codigo2[10];
    char  nome2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   npt2;// numero dos pontos turisticos 
    float per2; // PIB percapta 
    float den2; // densidade 


        // entrada carta 01


    printf("Digite os dados da primeira carta; \n");

    printf("Estado (A-H): ");
    scanf("%c" ,  &estado1);
    getchar();
    

    printf("Codigo: ");
    fgets(codigo1 , sizeof(codigo1) , stdin);
  

    printf("Cidade; ");
    fgets(nome1, sizeof(nome1), stdin); 
   
    
   
     printf("Populacao: "); 
    scanf("%d" , &populacao1);
    getchar();

     printf("Area km2: ");
    scanf("%f" , &area1);

    printf("Qual o PIB; ");
     scanf("%f" , &pib1);

    printf("Qual o numero dos pontos turisticos; ");
    scanf("%d", &npt1);


    

    
    
    
    
    // entrada carta 02




     printf("Digite os dados da segunda carta; \n");

    printf("Estado (A-H): ");
    scanf(" %c" ,  &estado2);
    getchar();
  

    printf("Codigo: ");
    fgets(codigo2, sizeof(codigo2) , stdin);


    printf("Cidade; ");
    fgets(nome2, sizeof(nome2), stdin); 
    
   
    printf("Populacao: "); 
    scanf("%d" , &populacao2);
   getchar();

    printf("Area km2: ");
    scanf("%f" , &area2);

      printf("Qual o PIB; ");
    scanf("%f" , &pib2);	

    printf("Qual o numero dos pontos turisticos; ");
    scanf("%d", &npt2);

    den1 = populacao1 / area1;
    den2 = populacao2 / area2;
    per1 = pib1 / populacao1;
    per2 = pib2 / populacao2;

   
   
    printf("\n=== Cartas cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s", codigo1);
    printf("Cidade: %s", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Sua densidade e de: %f\n", den1);
    printf("Seu PIB percapta e de: %f\n", per1);


  
  
  
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s", codigo2);
    printf("Cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Sua densidade e de: %.2f\n", den2);
    printf("Seu PIB percapta e de: %.2f\n", per2);

   
   
   
    return 0;


    





    











}