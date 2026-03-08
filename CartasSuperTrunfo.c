#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao,pturistico;
  float area,pib;
  char estado;
  char cidade[20],carta[20];
  // Área para entrada de dados

  printf("Escolha uma letra de 'A' a 'H', para representar o seu estado:\n ");
  scanf("%c",&estado);

  printf("Digite o código da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
  scanf("%s",&carta);

  printf("Digite o nome da cidade:\n");
  scanf("%s",&cidade);

  printf("Digite a quantidade de habitantes da sua cidade: \n");
  scanf("%d",&populacao);

  printf("Digite a área em km²:\n ");
  scanf("%f",&area);

  printf("Digite o PIB: \n");
  scanf("%f",&pib);

  printf("Digite a quantidade de pontos turísticos; \n");
  scanf("%d",&pturistico);

  // Área para exibição dos dados da cidade

  printf("Carta 1");
  printf("Estado: %s\n Código: %s\n",&estado,&carta);
  printf("Nome da Cidade: %s\n População: %d\n",&cidade,&populacao);
  printf("Área: %f\n PIB: %f\n",&area,&pib);
  printf("Número de Pontos Turísticos: %d",&pturistico);
return 0;
} 
