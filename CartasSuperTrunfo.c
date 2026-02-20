#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {// Área para definição das variáveis para armazenar as propriedades das cidades

// carta 1 
    char estado1[3]; 
    char codigo1[4];
    char cidade1[30]; 
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

// carta 2
    char estado2[3]; 
    char codigo2[4];
    char cidade2[30]; 
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;


// Área para entrada de dados -  entrada da carta 1 
  printf ("Preencha as informações da primeira carta \n");
  printf("Digite o estado: \n");    
  scanf("%2s", estado1);
  
  printf("Digite o código da carta: \n");
  scanf("%3s", codigo1);

  printf("Digite o nome da cidade: \n");
  scanf("%29s", cidade1);

  printf("Digite a população: \n");
  scanf("%d", &populacao1);

  printf("Digite a área em km quadrados: \n");
  scanf("%f", &area1);

  printf("Digite o PIB: \n");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos1);

// entrada da carta 2
  printf ("Preencha as informações da segunda carta \n");
  printf("Digite o estado: \n");    
  scanf("%2s", estado2);
  
  printf("Digite o código da carta: \n");
  scanf("%3s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf("%29s", cidade2);

  printf("Digite a população: \n");
  scanf("%d", &populacao2);

  printf("Digite a área em km quadrados: \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade
  // Exibir carta 1 
  printf ("Informaçãoes da primeira carta \n");
  printf("Código da carta: %s - Estado: %s \n", codigo1, estado1);
  printf("Cidade: %s - População: %d - Área: %2.f \n", cidade1, populacao1, area1);
  printf("PIB: %2.f - Pontos turísticos: %d \n \n", PIB1, pontos_turisticos1);

  // Exibir carta 2
  printf ("Informaçãoes da segunda carta \n");
  printf("Código da carta: %s - Estado: %s \n", codigo2, estado2);
  printf("Cidade: %s - População: %d - Área: %2.f \n", cidade2, populacao2, area2);
  printf("PIB: %2.f - Pontos turísticos: %d \n", PIB2, pontos_turisticos2);
//===== Comparação das cartas
    printf("\n===== Comparacoes =====\n");

// Populacao
if (populacao1 > populacao2)
    printf("Populacao: Carta 1 venceu\n");
else
    printf("Populacao: Carta 2 venceu\n");

// Area
if (area1 > area2)
    printf("Area: Carta 1 venceu\n");
else
    printf("Area: Carta 2 venceu\n");

// PIB
if (pib1 > pib2)
    printf("PIB: Carta 1 venceu\n");
else
    printf("PIB: Carta 2 venceu\n");

// Pontos Turisticos
if (pontos1 > pontos2)
    printf("Pontos Turisticos: Carta 1 venceu\n");
else
    printf("Pontos Turisticos: Carta 2 venceu\n");

// Densidade (menor vence)
if (dens1 < dens2)
    printf("Densidade: Carta 1 venceu\n");
else
    printf("Densidade: Carta 2 venceu\n");

// PIB per capita
if (pibper1 > pibper2)
    printf("PIB per capita: Carta 1 venceu\n");
else
    printf("PIB per capita: Carta 2 venceu\n");

// Super Poder
if (SuperPoderA > SuperPoderB)
    printf("Super Poder: Carta 1 venceu\n");
else
    printf("Super Poder: Carta 2 venceu\n");


return 0;
} 
