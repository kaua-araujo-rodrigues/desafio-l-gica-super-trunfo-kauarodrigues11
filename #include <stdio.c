#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

 // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nome1[50], nome2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontoturistico1, pontoturistico2;

  // Área para entrada de dados

  printf("\n\nCadastro da carta 1:\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Código da carta: ");
  scanf("%s", codigo1);

  printf("Nome da cidade: ");
  scanf("%s", nome1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Números de pontos turísticos: ");
  scanf("%d", &pontoturistico1);

  //Cadadrasto número 2 

  printf("\n\nCadastro da carta 2:\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Código da carta: ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf("%s", nome2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Números de pontos turísticos: ");
  scanf("%d", &pontoturistico2);

  //Menu de compração entre as cartas 

  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;

  int opcao;
  printf("1- População\n");
  printf("2- Área\n");
  printf("3- Densidade Demográfica\n");
  scanf("%d",&opcao);

  switch (opcao)

{
  case 1: 
    printf("Comparação das cartas\n");
    if (populacao1 > populacao2){
        printf("Carta 1 vence\n");
}
    else if(populacao2 > populacao1){
        printf("Carta 2 vence\n");
} 
    else {
        printf("empate\n");
}
    break;

  case 2:
    printf("Comparação das cartas\n");
    if (area1 > area2){
        printf("Carta 1 vence\n");
}
    else if(area2 > area1){
        printf("Carta 2 vence\n");
} 
    else {
        printf("empate\n");
}
    break;
    
  case 3:
    printf("Comparação das cartas\n");
    if (densidade1 < densidade2){
        printf("Carta 1 vence\n");
}
    else if(densidade2 < densidade1){
        printf("Carta 2 vence\n");
} 
    else {
        printf("empate\n");
}
    break;


  }


    return 0;

}

