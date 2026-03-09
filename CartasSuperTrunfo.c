#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  //variáveis carta 1

  int populacao,pturistico;
  float area,pib;
  char estado;
  char cidade[20],carta[20];

  // variáveis carta 2
  
  int populacao2,pturistico2;
  float area2,pib2; 
  char estado2;
  char cidade2[20],carta2[20];

  // Área para entrada de dados

  // Dados da carta 1

  printf("Escolha uma letra de 'A' a 'H', para representar o seu estado:\n ");
  scanf("%c",&estado);

  printf("Digite o código da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
  scanf("%s",carta);

  printf("Digite o nome da cidade:\n");
  scanf("%s",cidade);

  printf("Digite a quantidade de habitantes da sua cidade: \n");
  scanf("%d",&populacao);

  printf("Digite a área em km²:\n ");
  scanf("%f",&area);

  printf("Digite o PIB: \n");
  scanf("%f",&pib);

  printf("Digite a quantidade de pontos turísticos; \n");
  scanf("%d",&pturistico);
  printf("\n");

  // Dados da carta 2

  printf("Escolha uma letra de 'A' a 'H', para representar o seu estado:\n ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
  scanf("%s",carta2);

  printf("Digite o nome da cidade:\n");
  scanf("%s",cidade2);

  printf("Digite a quantidade de habitantes da sua cidade: \n");
  scanf("%d",&populacao2);

  printf("Digite a área em km²: \n");
  scanf("%f",&area2);

  printf("Digite o PIB: \n");
  scanf("%f",&pib2);

  printf("Digite a quantidade de pontos turísticos; \n");
  scanf("%d",&pturistico2);
  printf("\n");

  // Área para exibição dos dados da cidade

  // Leitura da carta 1

  printf("Carta 1\n");
  printf("Estado: %c\nCódigo: %s\n",estado,carta);
  printf("Nome da Cidade: %s\nPopulação: %d\n",cidade,populacao);
  printf("Área: %.2f\nPIB: %.2f\n",area,pib);
  printf("Número de Pontos Turísticos: %d\n",pturistico);
  printf("\n");

  // Leitura da carta 2

  printf("Carta 2\n");
  printf("Estado: %c\nCódigo: %s\n",estado2,carta2);
  printf("Nome da Cidade: %s\nPopulação: %d\n",cidade2,populacao2);
  printf("Área: %.2f\nPIB: %.2f\n",area2,pib2);
  printf("Número de Pontos Turísticos: %d\n",pturistico2);

return 0;
} 
