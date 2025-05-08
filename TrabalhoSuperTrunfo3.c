//nivel Mestre
#include <stdio.h>

int main() {
    // Entrada manual dos dados da Carta 1
    char Nome1[50];
    int Pop1, PTur1;
    float Area1, Pib1, Dens1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do país: ");
    scanf("%s", Nome1);
    printf("População: ");
    scanf("%d", &Pop1);
    printf("Área: ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &Pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &PTur1);
    Dens1 = Pop1 / Area1;

    // Entrada manual dos dados da Carta 2
    char Nome2[50];
    int Pop2, PTur2;
    float Area2, Pib2, Dens2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do país: ");
    scanf("%s", Nome2);
    printf("População: ");
    scanf("%d", &Pop2);
    printf("Área: ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &Pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &PTur2);
    Dens2 = Pop2 / Area2;

    // Escolha dos atributos
    int Escolha1 = 0;
    int Escolha2 = 0;

inicio_escolha1:
    printf("\n*** ESCOLHA O PRIMEIRO ATRIBUTO ***\n");
    printf("1. População\n2. Área\n3. Densidade Demográfica\n4. PIB\n5. Pontos Turísticos\n");
    scanf("%d", &Escolha1);
    if (Escolha1 < 1 || Escolha1 > 5) {
        printf("Opção inválida. Tente novamente.\n");
        goto inicio_escolha1;
    }

inicio_escolha2:
    printf("\n*** ESCOLHA O SEGUNDO ATRIBUTO (diferente do primeiro) ***\n");
    if (Escolha1 != 1) printf("1. População\n");
    if (Escolha1 != 2) printf("2. Área\n");
    if (Escolha1 != 3) printf("3. Densidade Demográfica\n");
    if (Escolha1 != 4) printf("4. PIB\n");
    if (Escolha1 != 5) printf("5. Pontos Turísticos\n");
    scanf("%d", &Escolha2);
    if (Escolha2 == Escolha1 || Escolha2 < 1 || Escolha2 > 5) {
        printf("Opção inválida ou repetida. Tente novamente.\n");
        goto inicio_escolha2;
    }

    // Comparação
    float v1_c1 = 0, v1_c2 = 0, v2_c1 = 0, v2_c2 = 0;

    // Obter valores do primeiro atributo
    if (Escolha1 == 1) { v1_c1 = Pop1; v1_c2 = Pop2; }
    else if (Escolha1 == 2) { v1_c1 = Area1; v1_c2 = Area2; }
    else if (Escolha1 == 3) { v1_c1 = Dens1; v1_c2 = Dens2; }
    else if (Escolha1 == 4) { v1_c1 = Pib1; v1_c2 = Pib2; }
    else if (Escolha1 == 5) { v1_c1 = PTur1; v1_c2 = PTur2; }

    // Obter valores do segundo atributo
    if (Escolha2 == 1) { v2_c1 = Pop1; v2_c2 = Pop2; }
    else if (Escolha2 == 2) { v2_c1 = Area1; v2_c2 = Area2; }
    else if (Escolha2 == 3) { v2_c1 = Dens1; v2_c2 = Dens2; }
    else if (Escolha2 == 4) { v2_c1 = Pib1; v2_c2 = Pib2; }
    else if (Escolha2 == 5) { v2_c1 = PTur1; v2_c2 = PTur2; }

    // Soma dos atributos
    float Soma1 = v1_c1 + v2_c1;
    float Soma2 = v1_c2 + v2_c2;

    // Exibir valores
    printf("\n=== RESULTADO ===\n");
    printf("%s:\n - Atributo 1: %.2f\n - Atributo 2: %.2f\n - Soma: %.2f\n", Nome1, v1_c1, v2_c1, Soma1);
    printf("%s:\n - Atributo 1: %.2f\n - Atributo 2: %.2f\n - Soma: %.2f\n", Nome2, v1_c2, v2_c2, Soma2);

    // Determinar vencedor (densidade = menor vence, os outros = maior vence)
    int pontos1 = 0;
    int pontos2 = 0;

    if (Escolha1 == 3) {
        if (v1_c1 < v1_c2) pontos1++; else if (v1_c2 < v1_c1) pontos2++;
    } else {
        if (v1_c1 > v1_c2) pontos1++; else if (v1_c2 > v1_c1) pontos2++;
    }

    if (Escolha2 == 3) {
        if (v2_c1 < v2_c2) pontos1++; else if (v2_c2 < v2_c1) pontos2++;
    } else {
        if (v2_c1 > v2_c2) pontos1++; else if (v2_c2 > v2_c1) pontos2++;
    }

    // Exibir resultado final
    printf("\n*** VENCEDOR ***\n");
    if (Soma1 > Soma2) printf("Vencedor: %s\n", Nome1);
    else if (Soma2 > Soma1) printf("Vencedor: %s\n", Nome2);
    else printf("Empate!\n");

    return 0;
}
