#include <stdio.h>

int main(){
    printf("BEM VINDOS A TODOS AO MEU COMEÇO DE UM JOGO DE SUPER TRUNFO, AGRADEÇO POR JOGAREM!\n\n");

    // variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // entrada de dados da primeira carta
    printf("Digite o estado da primeira cidade (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da primeira cidade (ex: A01): \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da primeira cidade: \n");
    scanf(" %s", nomeCidade1);

    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite o pib da primeira cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite a área da primeira cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o número de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontosTuristicos1);

    // variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\nDigite o estado da segunda cidade (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da segunda cidade (ex: B02): \n");
    scanf("%3s", codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite o PIB da segunda cidade (em bilhoes de reais): \n");
    scanf("%f", &pib2);
    
    printf("Digite a área da segunda cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digita o número de pontos turísticos da segunda cidade: \n");
    scanf("%c", &pontosTuristicos2);

    //Exibição das informações da primeira carta
    printf("\n    Carta 1    \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibição das informações da segunda carta
    printf("\n   Carta 2   \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    prinft("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;

} 