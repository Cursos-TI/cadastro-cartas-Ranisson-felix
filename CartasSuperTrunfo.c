#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao,pturistico;
  float area,pib;
  char estado;
  char cidade, carta [20];


  // Área para entrada de dados

  printf("Escolha uma letra de 'A' a 'H', para representar o seu estado:\n ");
  scanf("%s",&estado);

  print("Digite o código da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
  scanf("%s",&carta);

  printf("Digite a quantidade de habitantes da sua cidade:\n ");
  scanf("%d",&populacao);

  print("Digite a área em km²:\n ");
  scanf("%f",&area);

  // Área para exibição dos dados da cidade

return 0;
} 
