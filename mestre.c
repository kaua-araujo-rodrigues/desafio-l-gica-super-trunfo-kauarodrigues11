#include <stdio.h>

int main() {

  // Variáveis das cartas
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nome1[50], nome2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontoturistico1, pontoturistico2;

  int carta1_ponto = 0;
  int carta2_ponto = 0;

  // Cadastro carta 1
  printf("\nCadastro da carta 1:\n");

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

  printf("Pontos turísticos: ");
  scanf("%d", &pontoturistico1);

  // Cadastro carta 2
  printf("\nCadastro da carta 2:\n");

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

  printf("Pontos turísticos: ");
  scanf("%d", &pontoturistico2);

  // Cálculo densidade
  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;

  // Menu
  int opcao;
  printf("\nEscolha o atributo:\n");
  printf("1- População\n");
  printf("2- Área\n");
  printf("3- Densidade Demográfica\n");
  scanf("%d", &opcao);

  // Comparação
  switch (opcao)
  {
    case 1:
      printf("\nComparação de População:\n");

      if (populacao1 > populacao2) {
          carta1_ponto++;
      }
      else if (populacao2 > populacao1) {
          carta2_ponto++;
      }
      else {
          printf("Empate!\n");
      }
      break;

    case 2:
      printf("\nComparação de Área:\n");

      if (area1 > area2) {
          carta1_ponto++;
      }
      else if (area2 > area1) {
          carta2_ponto++;
      }
      else {
          printf("Empate!\n");
      }
      break;

    case 3:
      printf("\nComparação de Densidade:\n");

      if (densidade1 < densidade2) {
          carta1_ponto++;
      }
      else if (densidade2 < densidade1) {
          carta2_ponto++;
      }
      else {
          printf("Empate!\n");
      }
      break;

    default:
      printf("Opção inválida!\n");
      break;
  }

  // RESULTADO FINAL
  printf("\n===== RESULTADO FINAL =====\n");

  printf("Carta 1 pontos: %d\n", carta1_ponto);
  printf("Carta 2 pontos: %d\n", carta2_ponto);

  if (carta1_ponto > carta2_ponto) {
      printf("Carta 1 venceu o jogo!\n");
  }
  else if (carta2_ponto > carta1_ponto) {
      printf("Carta 2 venceu o jogo!\n");
  }
  else {
      printf("Empate geral!\n");
  }

  return 0;
}