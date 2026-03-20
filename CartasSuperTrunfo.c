#include <stdio.h>

int main () {
//declaração de variáveis
// carta 1
    char Estado1[20];
    char Codigo1[10];
    char NomeCidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
// carta 2
    char Estado2[20];
    char Codigo2[10];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;


//input dos dados das cartas.
    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", Estado1);
    printf("Digite o código, (a sigla do estado seguida de um numero): ");
    scanf("%s", Codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", NomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &Populacao1);
    printf("Digite a área: ");
    scanf("%f", &Area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    printf("Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", Estado2);
    printf("Digite o código, (a sigla do estado seguida de um numero): ");
    scanf("%s", Codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", NomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &Populacao2);
    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &Area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);


//demonstração das cartas
    printf("\nComparação entre as cartas:\n");
    printf("Vamos as cidades %s e %s\n", NomeCidade1, NomeCidade2);
    printf("População: %s = %d, %s = %d\n", NomeCidade1, Populacao1, NomeCidade2, Populacao2);
    printf("Área: %s = %.2f km², %s = %.2f km²\n", NomeCidade1, Area1, NomeCidade2, Area2);
    printf("PIB: %s = %.2f, %s = %.2f\n", NomeCidade1, PIB1, NomeCidade2, PIB2);
    printf("Pontos Turísticos: %s = %d, %s = %d\n", NomeCidade1, PontosTuristicos1, NomeCidade2, PontosTuristicos2);

return 0;
} 
