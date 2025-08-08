#include <stdio.h>

int main(){

    // dados

    int Escolha1, Escolha2;

    float Valor1_Carta1, Valor1_Carta2, Valor2_Carta1, Valor2_Carta2;

    //dados para a carta 1 e 2

    // Dados para a Carta 1

    char Pais1[25];

    int Populacao1, Pontos1;

    float Pib1, Densidade1, Per_Capita1, Area1;

    // Dados para a Carta 2

    char Pais2[25];

    int Populacao2, Pontos2;

    float Pib2, Densidade2, Per_Capita2, Area2;

    // Dados da Carta 1
    printf("\n***CARTA 1***\n");

    printf("Pais: ");
    scanf("%s", Pais1);

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

    // Dados da Carta 2
    printf("\n***CARTA 2***\n");
    printf("Pais: ");
    scanf("%s", Pais2);

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

    // Opção do Menu

    printf("\n--- Menu de Atributos ---\n");
    printf("1. Área\n");
    printf("2. População\n");
    printf("3. Densidade Populacional (menor vence)\n");
    printf("4. PIB\n");
    printf("5. Pontos Turísticos\n");
    printf("-------------------------\n");

    // Escolha do primeiro atributo

    printf("Escolha o primeiro atributo (1-5): ");
    scanf("%d", &Escolha1);

    switch (Escolha1)
    {
    case 1: 
        printf("Você escolheu Área.\n");
        break;
    case 2:
        printf("Você escolheu População.\n");
        break;
    case 3:
        printf("Você escolheu Densidade Populacional.\n");
        break;  
    case 4:
        printf("Você escolheu PIB.\n");
        break;
    case 5:
        printf("Você escolheu Pontos Turísticos.\n");
        break;
    default:
        printf("Opção inválida! Escolha um número entre 1 e 5.\n");
        break;
    }

    if (Escolha1 < 1 || Escolha1 > 5) {
        printf("Opção inválida! Escolha um número entre 1 e 5.\n");
        return 1;
    }

    // Escolha do segundo atributo

    printf("Escolha o segundo atributo (1-5), diferente do primeiro: ");
    scanf("%d", &Escolha2);

    switch (Escolha2)
    {
    case 1: 
        printf("Você escolheu Área.\n");
        break;
    case 2:
        printf("Você escolheu População.\n");
        break;
    case 3:
        printf("Você escolheu Densidade Populacional.\n");
        break;
    case 4:
        printf("Você escolheu PIB.\n");
        break; 
    case 5:
        printf("Você escolheu Pontos Turísticos.\n");
        break;
    
    default:
        printf("Opção inválida! Escolha um número entre 1 e 5.\n");
        break;
    }

    if (Escolha2 < 1 || Escolha2 > 5 || Escolha2 == Escolha1) {
        printf("Opção inválida! Escolha um número entre 1 e 5, diferente do primeiro.\n");
        return 1;
    }

    // Atribuição dos valores com base nas escolhas

    if (Escolha1 == 1) {
        Valor1_Carta1 = Area1;
        Valor1_Carta2 = Area2;

    } else if (Escolha1 == 2) {
        Valor1_Carta1 = Populacao1;
        Valor1_Carta2 = Populacao2;

    } else if (Escolha1 == 3) {
        Valor1_Carta1 = Densidade1;
        Valor1_Carta2 = Densidade2;

    } else if (Escolha1 == 4) {
        Valor1_Carta1 = Pib1;
        Valor1_Carta2 = Pib2;

    } else {
        Valor1_Carta1 = Pontos1;
        Valor1_Carta2 = Pontos2;

    }

    if (Escolha2 == 1) {
        Valor2_Carta1 = Area1;
        Valor2_Carta2 = Area2;

    } else if (Escolha2 == 2) {
        Valor2_Carta1 = Populacao1;
        Valor2_Carta2 = Populacao2;

    } else if (Escolha2 == 3) {
        Valor2_Carta1 = Densidade1;
        Valor2_Carta2 = Densidade2;

    } else if (Escolha2 == 4) {
        Valor2_Carta1 = Pib1;
        Valor2_Carta2 = Pib2;

    } else {
        Valor2_Carta1 = Pontos1;
        Valor2_Carta2 = Pontos2;

    }
    // Comparação dos atributos

    printf("\n--- Resultados ---\n");

    // Comparação do primeiro atributo
    
    if (Escolha1 == 3) { // Densidade Populacional (menor vence)
        if (Valor1_Carta1 < Valor1_Carta2) {
            printf("No atributo Densidade Populacional, o país %s vence com %.2f contra %.2f do país %s.\n", Pais1, Valor1_Carta1, Valor1_Carta2, Pais2);
        } else if (Valor1_Carta1 > Valor1_Carta2) {
            printf("No atributo Densidade Populacional, o país %s vence com %.2f contra %.2f do país %s.\n", Pais2, Valor1_Carta2, Valor1_Carta1, Pais1);
        } else {
            printf("No atributo Densidade Populacional, houve um empate com ambos os países tendo %.2f.\n", Valor1_Carta1);
        }
    } else { // Outros atributos (maior vence)
        if (Valor1_Carta1 > Valor1_Carta2) {
            printf("No atributo %d, o país %s vence com %.2f contra %.2f do país %s.\n", Escolha1, Pais1, Valor1_Carta1, Valor1_Carta2, Pais2);
        } else if (Valor1_Carta1 < Valor1_Carta2) {
            printf("No atributo %d, o país %s vence com %.2f contra %.2f do país %s.\n", Escolha1, Pais2, Valor1_Carta2, Valor1_Carta1, Pais1);
        } else {
            printf("No atributo %d, houve um empate com ambos os países tendo %.2f.\n", Escolha1, Valor1_Carta1);
        }

    }
    
    // Comparação do segundo atributo

    if (Escolha2 == 3) { // Densidade Populacional (menor vence)
        if (Valor2_Carta1 < Valor2_Carta2) {
            printf("No atributo Densidade Populacional, o país %s vence com %.2f contra %.2f do país %s.\n", Pais1, Valor2_Carta1, Valor2_Carta2, Pais2);
        } else if (Valor2_Carta1 > Valor2_Carta2) {
            printf("No atributo Densidade Populacional, o país %s vence com %.2f contra %.2f do país %s.\n", Pais2, Valor2_Carta2, Valor2_Carta1, Pais1);
        } else {
            printf("No atributo Densidade Populacional, houve um empate com ambos os países tendo %.2f.\n", Valor2_Carta1);
        }
    } else { // Outros atributos (maior vence)
        if (Valor2_Carta1 > Valor2_Carta2) {
            printf("No atributo %d, o país %s vence com %.2f contra %.2f do país %s.\n", Escolha2, Pais1, Valor2_Carta1, Valor2_Carta2, Pais2);
        } else if (Valor2_Carta1 < Valor2_Carta2) {
            printf("No atributo %d, o país %s vence com %.2f contra %.2f do país %s.\n", Escolha2, Pais2, Valor2_Carta2, Valor2_Carta1, Pais1);
        } else {
            printf("No atributo %d, houve um empate com ambos os países tendo %.2f.\n", Escolha2, Valor2_Carta1);
        }


    }
    // Soma dos atributos
    float Soma1 = Valor1_Carta1 + Valor2_Carta1;
    float Soma2 = Valor1_Carta2 + Valor2_Carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", Pais1, Soma1);
    printf("%s: %.2f\n", Pais2, Soma2);
    // Resultado final
    printf("\n--- Resultado Final ---\n");
    if (Soma1 > Soma2) {
        printf("Vencedor: %s\n", Pais1);
    } else if (Soma2 > Soma1) {
        printf("Vencedor: %s\n", Pais2);
    } else {
        printf("Empate!\n");
    }
    return 0;
}
