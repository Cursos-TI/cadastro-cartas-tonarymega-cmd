#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  printf("Desafio Super Trunfo - Estados\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 1

char Estado[30] = "Pernambuco";
char Cidade[20] = "Recife";
char Código[10] = "PE1";
float Populacao =  9.562007;
int pontos_turísticos_1 = 40; 
float Área_em_Km² = 98.312;
float PIB = 254.9;
float Densidade_populacional = Populacao / Área_em_Km²;
float PIB_per_capita = PIB / Populacao;
//Carta 2
 
char Estado_2[11] = "Bahia";
char Cidade_2[30] = "Salvador";
char Código_2[10] = "AD2";
float População_2 = 14.870907;
int pontos_turísticos_2 = 50; 
float Área_em_Km²_2 = 567.295;
float PIB_2 = 402.6;
float Densidade_populacional_2 = População_2 / Área_em_Km²_2;
float PIB_per_capita_2 = PIB_2 / População_2;

  
  // Área para entrada de dados
// Carta 1

printf("Digite o nome do primeiro estado:\n"); 
scanf("%s", Estado);

printf("Digite o nome da cidade: \n");
scanf("%s", Cidade);

printf("Digite o código da cidade: \n");
scanf("%s", Código);

printf("Digite a população: \n");
scanf("%f", &Populacao);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turísticos_1);       

printf("Digite a área em Km²: \n");
scanf("%f", &Área_em_Km²);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

// Carta 2

printf("Digite o nome do segundo estado:\n");
scanf("%s", Estado_2);

printf("Digite o nome da cidade: \n");
scanf("%s", Cidade_2);

printf("Digite o código da cidade: \n");
scanf("%s", Código_2);

printf("Digite a população: \n");
scanf("%f", &População_2);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turísticos_2);

printf("Digite a área em Km²: \n");
scanf("%f", &Área_em_Km²_2);

printf("Digite o PIB: \n");
scanf("%f", &PIB_2);

  // Área para exibição dos dados da cidade

// Carta 1

printf("\nEstado 1: %s\n", Estado);
printf("Cidade: %s\n", Cidade);
printf("Código: %s\n", Código);
printf("População: %f\n", Populacao);
printf("Pontos turísticos: %d\n", pontos_turísticos_1);
printf("Área em Km²: %.3f\n", Área_em_Km²);
printf("PIB (bilhões): %.1f\n", PIB);
printf("Densidade Populacional: %.2f\n", Densidade_populacional);
printf("PIB per capita: %.2f\n", PIB_per_capita);
// Carta 2

printf("\nEstado 2: %s\n", Estado_2);
printf("Cidade: %s\n", Cidade_2);
printf("Código: %s\n", Código_2);
printf("População: %f\n", População_2);
printf("Pontos turísticos: %d\n", pontos_turísticos_2);
printf("Área em Km²: %.3f\n", Área_em_Km²_2);
printf("PIB (bilhões): %.1f\n", PIB_2);
printf("Densidade Populacional: %.2f\n", Densidade_populacional_2);
printf("PIB per capita: %.2f\n", PIB_per_capita_2);

return 0;
} 