#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

   //Declaração de variáveis da carta 1

    char Estado1;
    char Codigo1 [4];
    char NomeCidade1 [50];
    int Populacao1;
    int PontoTuristicos1;
    float Area1;
    float Pib1;

    //Declaração de variáveis da carta 2

    char Estado2;
    char Codigo2 [4];
    char NomeCidade2 [50];
    int Populacao2;
    int PontoTuristicos2;
    float Area2;
    float Pib2;

    //Leitura dos dados da carta 1

    printf("Carta 1: \n");

    printf("Letra do Estado de (A-H): ");
    scanf(" %c", &Estado1);

    printf("Código da carta: ");
    scanf("%s", Codigo1);

    printf("Nome da cidade: ");
    scanf("%s", NomeCidade1);

    printf("População da Cidade: ");
    scanf("%d", &Populacao1);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &PontoTuristicos1);

    printf("Área em km²: ");
    scanf("%e", &Area1);

    printf("Pib em Bilhões: ");
    scanf("%e", &Pib1);

    //Leitura dos dados da carta 2
    
    printf("\n");

    printf("Carta 2: \n");

    printf("Letra do Estado de (A-H): ");
    scanf(" %c", &Estado2);

    printf("Código da carta: ");
    scanf("%s", Codigo2);

    printf("Nome da cidade: ");
    scanf("%s", NomeCidade2);

    printf("População da Cidade: ");
    scanf("%d", &Populacao2);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &PontoTuristicos2);

    printf("Área em km²: ");
    scanf("%e", &Area2);

    printf("Pib em Bilhões: ");
    scanf("%e", &Pib2);

    //Informações dos dados da carta 1

    printf("\n");

    printf("Informações dos dados da carta 1: \n ");

    printf("Estado: %c\n", Estado1);
    printf("Código da carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População da cidade: %d\n", Populacao1);
    printf("Pontos Turisticos: %d\n", PontoTuristicos1);
    printf("Área em km²: %.2e\n", Area1);
    printf("Pib em Bilhões: %.2e\n", Pib1);

    //Informações dos dados da carta 2

    printf("Informações dos dados da carta 2: \n ");

    printf("Estado: %c\n", Estado2);
    printf("Código da carta: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População da cidade: %d\n", Populacao2);
    printf("Pontos Turisticos: %d\n", PontoTuristicos2);
    printf("Área em km²: %.2e\n", Area2);
    printf("Pib em Bilhões: %.2e\n", Pib2);

    return 0;


}

    /*
    informações das variaveis das cartas 1 e 2, cidades escolhidas para o teste como exemplos:

    Carta 1:

    char Estado1 ='G';
    char Codigo1 [4] = "A01";
    char NomeCidade1 [50] = "Anápolis";
    int Populacao1 = 415847;
    int PontoTuristicos1 = 15;
    float Area1 = 935.672; // (km²)
    float Pib1 = 17.8; // (Bilhões)

    Carta 2:

    char Estado2 ='F';
    char Codigo2 [4] = "B02";
    char NomeCidade2 [50] = "Florianópolis";
    int Populacao2 = 537211;
    int PontoTuristicos2 = 100;
    float Area2 = 675.4; // (km²)
    float Pib2 = 23.5; // (Bilhões)

    */