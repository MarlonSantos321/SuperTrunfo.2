//nivel Mestre

#include <stdio.h>

     int main(){

            //Carta 1

            char Nome1[] = "Eua" ;
            int População1 = 335000000;
            float Area1 = 9800000.00;
            unsigned long long int Pib1 = 28000000000000.00;
            float Densidade1 = (População1 / Area1);

            //Carta 2

            char Nome2[] = "China" ;
            unsigned long int População2 = 1500000000;
            float Area2 = 9600000.00;
            unsigned long long int Pib2 = 17700000000000 ;
            float Densidade2 = (População2 / Area2);

            //Opção para o menu e demais Funções

            int Escolha1, Escolha2;
            float Valor1_Carta1, Valor1_Carta2;
            float Valor2_Carta1, Valor2_Carta2;
            int Pontos_Carta1 = 0;
            int Pontos_Carta2 = 0;

            //menu do primeiro atributo
            printf("*** ESCOLHA O PRIMEIRO ATRIBUTO ***\n");
            printf("1. População\n");
            printf("2. Area\n");
            printf("3. Densidade Populacional\n");
            printf("4. PIB\n");
            printf("Escolha um Numero de 1 a 4: ");
            scanf("%i", &Escolha1);

            printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
            switch (Escolha1)
            {
            case 1: 
            printf("2. Area\n");
            printf("3. Densidade Populacional\n");
            printf("4. PIB\n");
             break;

            case 2:
            printf("1. População\n");
            printf("3. Densidade Populacional\n");
            printf("4. PIB\n");
             break;

            case 3:
            printf("1. População\n");
            printf("2. Area\n");
            printf("4. PIB\n");
             break;

            case 4:
            printf("1. População\n");
            printf("2. Area\n");
            printf("3. Densidade Populacional\n");
             break;

            default:
            printf("Opção Inválida");
             break;
            }
            scanf("%d", &Escolha2);
            
                // Validação: os atributos devem ser diferentes
            if (Escolha1 == Escolha2 || Escolha1 < 1 || Escolha1 > 4 || Escolha2 < 1 || Escolha2 > 4) {
        printf("Erro: atributos inválidos ou repetidos!\n");
        return 1;
    }
            // Obter os Valores dá carta 1

            if (Escolha1 == 1){
                Valor1_Carta1 = População1;
                Valor1_Carta2 = População2;

            }else if (Escolha1 == 2){
                Valor1_Carta1 = Area1;
                Valor1_Carta2 = Area2;

            }else if (Escolha1 == 3){
                Valor1_Carta1 = Densidade1;
                Valor1_Carta2 = Densidade2;
                
            }else{
                Valor1_Carta1 = Pib1;
                Valor1_Carta2 = Pib2;

            }

            // Obter os Valores dá Carta 2

            if (Escolha2 == 1) {
                Valor2_Carta1 = População1;
                Valor2_Carta2 = População2;

            } else if (Escolha2 == 2) {
                Valor2_Carta1 = Area1;
                Valor2_Carta2 = Area2;

            } else if (Escolha2 == 3) {
                Valor2_Carta1 = Densidade1;
                Valor2_Carta2 = Densidade2;

            } else {
                Valor2_Carta1 = Pib1;
                Valor2_Carta2 = Pib2;

            }

    // Comparação dos atributos
    int pontos_carta1 = 0;
    int pontos_carta2 = 0;

    // Primeiro atributo
                 // Densidade - menor vence
    if (Escolha1 == 3) {
        if(Valor1_Carta1 < Valor1_Carta2) pontos_carta1++;

        else if (Valor1_Carta2 < Valor1_Carta1) pontos_carta2++;

    } else {
        if (Valor1_Carta1 > Valor1_Carta2) pontos_carta1++;

        else if (Valor1_Carta2 > Valor1_Carta1) pontos_carta2++;

    }

    // Segundo atributo
                  // Densidade - menor vence
    if (Escolha2 == 3) { 
        if (Valor2_Carta1 < Valor2_Carta2) pontos_carta1++;

        else if (Valor2_Carta2 < Valor2_Carta1) pontos_carta2++;

    } else {
        if (Valor2_Carta1 > Valor2_Carta2) pontos_carta1++;

        else if (Valor2_Carta2 > Valor2_Carta1) pontos_carta2++;

    }

    // Soma dos atributos
    float Soma1 = Valor1_Carta1 + Valor2_Carta1;
    float Soma2 = Valor1_Carta2 + Valor2_Carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", Nome1, Soma1);
    printf("%s: %.2f\n", Nome2, Soma2);

    // Resultado final
    printf("\n--- Resultado Final ---\n");
    if (Soma1 > Soma2) {
        printf("Vencedor: %s\n", Nome1);
    } else if (Soma2 > Soma1) {
        printf("Vencedor: %s\n", Nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}