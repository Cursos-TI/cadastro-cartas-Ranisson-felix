#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  //variáveis carta 1

  int populacao,pturistico;
  float area,pib,densidadep,pibpercapita;
  float superpoder1,inversodensidadep;
  char estado;
  char cidade[20],carta[20];

  // variáveis carta 2
  
  int populacao2,pturistico2;
  float area2,pib2,densidadep2,pibpercapita2;
  float superpoder2,inversodensidadep2;
  char estado2;
  char cidade2[20],carta2[20];

  // variáveis para comparação das cartas

  int comparacao1,comparacao2,comparacao3,comparacao4,comparacao5,comparacao6,comparacao7;

  // Área para entrada de dados

  // Dados da carta 1

  printf("Escolha uma letra de 'A' a 'H', para representar o seu 1º estado: \n ");
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

  // Área para cálculos das propriedades da carta 1

  // Cálculo da densidade populacional e PIB per capita para a carta 1

  densidadep = (float) populacao / area;
  pibpercapita = (float) (pib * 1000000000.0) / populacao;

  // cálculo do inverso da densidade populacional para a carta 1

  inversodensidadep = (float) area / populacao;
  
  // Cálculo do superpoder para a carta 1

  superpoder1 =(float) populacao + area + pib + pturistico + pibpercapita + inversodensidadep;
  


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

  // Área para cálculos das propriedades da carta 2

  // Cálculo da densidade populacional e PIB per capita para a carta 2

  densidadep2 = (float) populacao2 / area2;
  pibpercapita2 = (float) (pib2 * 1000000000.0) / populacao2;

  // cálculo do inverso da densidade populacional para a carta 2

  inversodensidadep2 = (float) area2 / populacao2;
  
  // Cálculo do superpoder para a carta 2

  superpoder2 = (float) populacao2 + area2 + pib2 + pturistico2 + pibpercapita2 + inversodensidadep2;

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
  printf("\n"); 

  // comparação das cartas

  comparacao1 = populacao > populacao2;
  comparacao2 = area > area2;
  comparacao3 = pib > pib2;
  comparacao4 = pturistico > pturistico2;
  comparacao5 = densidadep < densidadep2;
  comparacao6 = pibpercapita > pibpercapita2;
  comparacao7 = superpoder1 > superpoder2;

 // saída de dados da comparação

  printf("Comparação das Cartas: \n");
  printf("1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence \n");
  printf("População: %d \n",comparacao1);
  printf("Área: %d \n",comparacao2);
  printf("PIB: %d \n", comparacao3 );
  printf("Pontos Turísticos: %d \n",comparacao4);
  printf("Densidade Populacional: %d \n", comparacao5);
  printf("PIB per Capita: %d \n", comparacao6);
  printf("Superpoder: %d",comparacao7);
  printf("\n");

return 0;
} 
