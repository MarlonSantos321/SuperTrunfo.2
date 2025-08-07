#include <stdio.h>

    int main() {

    // Dados para a Carta 1
    char Estado1[25], Cidade1[30], Codigo1[10];

    int Populacao1, Pontos1;

    float Pib1, Densidade1, Per_Capita1, Area1;

    // Dados para a Carta 2
    char Estado2[25], Cidade2[30], Codigo2[10];

    int Populacao2, Pontos2;

    float Pib2, Densidade2, Per_Capita2, Area2;

    //dados sem ser da carta 1 e 2

    int comparacao;

    // Dados da Carta 1
    printf("\n***CARTA 1***\n");
    printf("Codigo: ");
    scanf("%s", Codigo1);
    printf("Estado: ");
    scanf("%s", Estado1);
    printf("Cidade: ");
    scanf("%s", Cidade1);
    printf("Area da Cidade: ");
    scanf("%f", &Area1);
    printf("Populacao: ");
    scanf("%d", &Populacao1);
    printf("Pib Da Cidade: ");
    scanf("%f", &Pib1);
    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &Pontos1);

    // Cálculo da densidade populacional e PIB per capita
        
    Densidade1 = Populacao1 / Area1;
    Per_Capita1 = Pib1 / Populacao1;
    
    // Dados da Carta 2

    printf("\n***CARTA 2***\n");
    printf("Codigo: ");
    scanf("%s", Codigo2);
    printf("Estado: ");
    scanf("%s", Estado2);
    printf("Cidade: ");
    scanf("%s", Cidade2);
    printf("Area da Cidade: ");
    scanf("%f", &Area2);
    printf("Populacao: ");
    scanf("%d", &Populacao2);
    printf("Pib Da Cidade: ");
    scanf("%f", &Pib2);
    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &Pontos2);

    // Cálculo da densidade populacional e PIB per capita para a Carta 2

    Densidade2 = Populacao2 / Area2;
    Per_Capita2 = Pib2 / Populacao2;

    printf("\nComparando as cartas...\n");

    printf("*** ESCOLHA UM ATRIBUTO PARA COMPARAR ***\n");
    printf("1. Area\n");
    printf("2. População\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per capita\n");
    printf("6. Pontos Turísticos\n");
    printf("Sua escolha é: ");
    scanf("%d", &comparacao);


    // Comparação dos atributos selecionados

    // O switch case compara os atributos selecionados e imprime o resultado da comparação

    // O case serve para selecionar o atributo que será comparado

    // E o if else serve para comparar os valores dos atributos selecionados

    // O break serve para parar a execução do switch case após a comparação

    // O default serve para imprimir uma mensagem de erro caso o usuário selecione um atributo inválido

    switch (comparacao) {
    case 1:
        if (Area1 > Area2) {
            printf("A cidade %s tem uma área maior que a cidade %s\n", Cidade1, Cidade2);
        } else if (Area1 < Area2) {
            printf("A cidade %s tem uma área maior que a cidade %s\n", Cidade2, Cidade1);
        } else {
            printf("As cidades %s e %s têm a mesma área\n", Cidade1, Cidade2);
        }
        break;

    case 2:
        if (Populacao1 > Populacao2) {
            printf("A cidade %s tem uma população maior que a cidade %s\n", Cidade1, Cidade2);
        } else if (Populacao1 < Populacao2) {
            printf("A cidade %s tem uma população maior que a cidade %s\n", Cidade2, Cidade1);
        } else {
            printf("As cidades %s e %s têm a mesma população\n", Cidade1, Cidade2);
        }
        break;

    case 3:
        if (Pib1 > Pib2) {
            printf("A cidade %s tem um PIB maior que a cidade %s\n", Cidade1, Cidade2);
        } else if (Pib1 < Pib2) {
            printf("A cidade %s tem um PIB maior que a cidade %s\n", Cidade2, Cidade1);
        } else {
            printf("As cidades %s e %s têm o mesmo PIB\n", Cidade1, Cidade2);
        }
        break;

    case 4:
        if (Densidade1 < Densidade2) {
            printf("A cidade %s tem uma densidade populacional menor que a cidade %s\n", Cidade1, Cidade2);
        } else if (Densidade1 > Densidade2) {
            printf("A cidade %s tem uma densidade populacional menor que a cidade %s\n", Cidade2, Cidade1);
        } else {
            printf("As cidades %s e %s têm a mesma densidade populacional\n", Cidade1, Cidade2);
        }
        break;

    case 5:
        if (Per_Capita1 > Per_Capita2) {
            printf("A cidade %s tem um PIB per capita maior que a cidade %s\n", Cidade1, Cidade2);
        } else if (Per_Capita1 < Per_Capita2) {
            printf("A cidade %s tem um PIB per capita maior que a cidade %s\n", Cidade2, Cidade1);
        } else {
            printf("As cidades %s e %s têm o mesmo PIB per capita\n", Cidade1, Cidade2);
        }
        break;

    case 6:
        if (Pontos1 > Pontos2) {
            printf("A cidade %s tem mais pontos turísticos que a cidade %s\n", Cidade1, Cidade2);
        } else if (Pontos1 < Pontos2) {
            printf("A cidade %s tem mais pontos turísticos que a cidade %s\n", Cidade2, Cidade1);
        } else {
            printf("As cidades %s e %s têm o mesmo número de pontos turísticos\n", Cidade1, Cidade2);
        }
        break;

    default:
        printf("Opção inválida!\n");
        break;
    };

return 0;
}
