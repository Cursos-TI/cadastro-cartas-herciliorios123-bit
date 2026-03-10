#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float dens1;
    float pibper1;
    float SuperPoderA;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float dens2;
    float pibper2;
    float SuperPoderB;

    // ===== Entrada Carta 1 =====
    printf("Cadastro da Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf("%29s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);


    // ===== Entrada Carta 2 =====
    printf("\nCadastro da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf("%29s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ===== Calculando PIB per capita ===== 
    pibper1 = pib1 / populacao1;
    pibper2 = pib2 / populacao2;

    // ===== Calculando Densidade populacional ===== 
    dens1 = populacao1 / area1;
    dens2 = populacao2 / area2;

    // ===== Calculando Super Poder ===== 
    SuperPoderA = populacao1 + area1 + (1 / dens1) + pib1 + pibper1 + pontos1;
    SuperPoderB = populacao2 + area2 + (1 / dens2) + pib2 + pibper2 + pontos2;

    // ===== Exibição =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("Densidade populacional: %.2f habintante por km quadrado \n", dens1);
    printf("PIB: %.2f\n", pib1);
    printf("O PIB per capita é: %.2f \n", pibper1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Super Poder: %.2f\n", SuperPoderA);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("Densidade populacional: %.2f habintante por km quadrado \n", dens2);
    printf("PIB: %.2f\n", pib2);
    printf("O PIB per capita é: %.2f \n", pibper2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Super Poder: %.2f\n", SuperPoderB);

    //===== Comparação das cartas
    printf("\n===== Comparacoes =====\n");

printf("Escolha o atributo para comparar:\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Populacional\n");
printf("6 - PIB per capita\n");
printf("7 - Super Poder\n");

scanf("%d", &opcao);

switch(opcao){
// População
case 1:
if (populacao1 > populacao2)
    printf("Populacao: Carta 1 venceu\n");

else if (populacao2 > populacao1)
    printf("Populacao: Carta 2 venceu\n");

else
    printf("Populacao: Empate\n");
break;

// Área
case 2:
if (area1 > area2)
    printf("Area: Carta 1 venceu\n");

else if (area2 > area1)
    printf("Area: Carta 2 venceu\n");

else
    printf("Area: Empate\n");
break;

// PIB
case 3:
if (pib1 > pib2)
    printf("PIB: Carta 1 venceu\n");

else if (pib2 > pib1)
    printf("PIB: Carta 2 venceu\n");

else
    printf("PIB: Empate\n");
break;

// Pontos turísticos
case 4:
if (pontos1 > pontos2)
    printf("Pontos Turisticos: Carta 1 venceu\n");

else if (pontos2 > pontos1)
    printf("Pontos Turisticos: Carta 2 venceu\n");

else
    printf("Pontos Turisticos: Empate\n");
break;

// Densidade (menor vence)
case 5:
if (dens1 < dens2)
    printf("Densidade: Carta 1 venceu\n");

else if (dens2 < dens1)
    printf("Densidade: Carta 2 venceu\n");

else
    printf("Densidade: Empate\n");
break;

// PIB per capita
case 6:
if (pibper1 > pibper2)
    printf("PIB per capita: Carta 1 venceu\n");

else if (pibper2 > pibper1)
    printf("PIB per capita: Carta 2 venceu\n");

else
    printf("PIB per capita: Empate\n");
break;

// Super Poder
case 7:
if (SuperPoderA > SuperPoderB)
    printf("Super Poder: Carta 1 venceu\n");

else if (SuperPoderB > SuperPoderA)
    printf("Super Poder: Carta 2 venceu\n");

else
    printf("Super Poder: Empate\n");
break;

default:
    printf("Opção inválida\n");
}

return 0;
}
