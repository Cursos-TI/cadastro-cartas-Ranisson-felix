#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  //variáveis carta 1

  int populacao,pturistico;
  float area,pib,densidadep,pibpercapita;
  char estado;
  char cidade[20],carta[20];

  // variáveis carta 2
  
  int populacao2,pturistico2;
  float area2,pib2,densidadep2,pibpercapita2;
  char estado2;
  char cidade2[20],carta2[20];

  // Área para entrada de dados

  // Dados da carta 1

  printf("Escolha uma letra de 'A' a 'H', para representar o seu state: \n ");
  scanf(" %c",&estado);

  printf("Digite o código da carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
  scanf(" %s",carta);
 
  printf("Digite o nome da cidade: \n");
  scanf(" %s", cidade);

  printf("Digite a quantidade de habitantes da sua cidade: \n");
  scanf(" %d",&populacao);

  printf("Digite a área em km²: \n");
  scanf(" %f",&area);

  printf("Digite o PIB: \n");
  scanf(" %f",&pib);

  printf("Digite a quantidade de pontos turísticos; \n");
  scanf(" %d",&pturistico);
  printf("\n");

  densidadep = (float) populacao / area;
  pibpercapita = (float) (pib * 1000000000.0) / populacao;

  // Dados da carta 2

  printf("Escolha uma letra de 'A' a 'H', para representar o seu 2º estado: \n");
  scanf(" %c",&estado2);

  printf("Digite o código da 2º carta, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
  scanf(" %s",carta2);

  printf("Digite o nome da cidade: \n");
  scanf(" %s",cidade2);

  printf("Digite a quantidade de habitantes da sua cidade: \n");
  scanf(" %d",&populacao2);

  printf("Digite a área em km²: \n");
  scanf(" %f",&area2);

  printf("Digite o PIB: \n");
  scanf(" %f",&pib2);

  printf("Digite a quantidade de pontos turísticos; \n");
  scanf(" %d",&pturistico2);
  printf("\n");

  densidadep2 = (float) populacao2 / area2;
  pibpercapita2 = (float) (pib2 * 1000000000.0) / populacao2;

  // Área para exibição dos dados da cidade

  // Leitura da carta 1

  printf("Carta 1 \n");
  printf("Estado: %c \n",estado);
  printf("Código: %s \n",carta);
  printf("Nome da Cidade: %s \n",cidade);
  printf("População: %d \n",populacao);
  printf("Área: %.2f km² \n",area);
  printf("PIB: %.2f bilhões de reais \n",pib);
  printf("Número de Pontos Turísticos: %d \n",pturistico);
  printf("Densidade Populacional: %.2f hab/km² \n",densidadep);
  printf("PIB per Capita: %.2f reais \n",pibpercapita);
  printf("\n");

  // Leitura da carta 2

  printf("Carta 2 \n");
  printf("Estado: %c\n",estado2);
  printf("Código: %s\n",carta2);
  printf("Nome da Cidade: %s\n",cidade2);
  printf("População: %d\n",populacao2);
  printf("Área: %.2f km² \n",area2);
  printf("PIB: %.2f bilhões de reais \n",pib2);
  printf("Número de Pontos Turísticos: %d \n",pturistico2);
  printf("Densidade Populacional: %.2f hab/km² \n",densidadep2);
  printf("PIB per Capita: %.2f reais \n",pibpercapita2);

return 0;
} 
