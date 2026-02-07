#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

//carta 1
    
    char estadoEscolhido1;
    int numero1;
    char cidade1[50];
    int habitantes1;
    float Area1, PIB1;
    int PTUR1;

    printf("- Cadastre a Carta 1 - \nDigite o Estado (letra de 'A' a 'H'): \n");
    scanf(" %c", &estadoEscolhido1);

    printf("Digite o codigo do Estado (numero de 01-08): \n");
    scanf("%d", &numero1);

    printf("Escreva o nome da cidade(sem espacao): \n");
    scanf(" %49s",cidade1);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &habitantes1);

    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade em R$: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &PTUR1);

    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estadoEscolhido1);
    printf("Codigo do estado: %d %c\n", numero1, estadoEscolhido1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero de habitantes: %d\n", habitantes1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Pontos turisticos: %d\n", PTUR1);
     
    //carta 2
    
    char estadoEscolhido2;
    int numero2;
    char cidade2[50];
    int habitantes2;
    float Area2, PIB2;
    int PTUR2;

    printf("\n- Cadastre a Carta 2 - \nDigite o Estado (letra de 'A' a 'H'): \n");
    scanf(" %c", &estadoEscolhido2);

    printf("Digite o codigo do Estado (numero de 01-08): \n");
    scanf("%d", &numero2);

    printf("Escreva o nome da cidade(sem espaco): \n");
    scanf(" %49s", cidade2);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &habitantes2);

    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade em R$: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &PTUR2);

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estadoEscolhido2);
    printf("Codigo do estado: %d %c\n", numero2, estadoEscolhido2);
    printf("Cidade: %s\n", cidade2);
    printf("Numero de habitantes: %d\n", habitantes2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Pontos turisticos: %d\n", PTUR2);

return 0;
} 
