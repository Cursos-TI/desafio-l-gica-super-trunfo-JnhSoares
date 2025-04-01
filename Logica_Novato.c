#include <stdio.h>
int main(){
printf("Super Trunfo - Países!\n");

char estado1, estado2 = 'A';
char codigo1[4], codigo2[4];
char cidade1[30], cidade2[30];
int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int pontos1, pontos2;


//Leitura de dados Carta 1
printf("Carta 1\n");
printf("Digite a letra do estado: ");
scanf(" %c", &estado1);

printf("Digite o código da cidade: ");
scanf("%s", &codigo1);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade1);

printf("Digite a população: ");
scanf("%d", &populacao1);

printf("Digite a área: ");
scanf("%f", &area1);

printf("Digite o PIB: ");
scanf("%f", &PIB1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontos1);

//Impressão de dados Carta 1
printf("Carta 1\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de Pontos Turísticos: %d\n", pontos1);


//Leitura de dados Carta 2
printf("Carta 2\n");
printf("Digite a letra do estado: ");
scanf(" %c", &estado2);

printf("Digite o código da cidade: ");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: ");
scanf("%s", &cidade2);

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área: ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &PIB2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontos2);

//Impressão de dados Carta 2
printf("Carta 2\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Número de Pontos Turísticos: %d\n", pontos2);

//Comparação de cartas (Atributo: População)

if(populacao1 > populacao2) {
    printf("Resultado: %s tem a maior população.\nCarta 1 venceu!\n", cidade1); }
else{
    printf("Resultado: %s tem a maior população.\nCarta 2 venceu!\n", cidade2); }

return 0;

}