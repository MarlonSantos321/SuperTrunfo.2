//Nivel Aventureiro

#include <stdio.h>

      int main(){

        // Dados da Carta 1
        char nome1[] = "Brasil";
        int populacao1 = 12300;
        float area1 = 1000.5;
        float pib1 = 50000.0;   
        float idh1 = 0.75;
        float densidade1 = populacao1 / area1;
        int opcao = 0;


        // Dados da Carta 2
        char nome2[] = "Alemanha";
        int populacao2 = 8000;  
        float area2 = 500.0;
        float pib2 = 60000.0;
        float idh2 = 0.85;
        float densidade2 = populacao2 / area2;

        //opções de comparação

        printf("*** ESCOLHA UM ATRIBUTO PARA COMPARAR ***\n");
        printf("1. PIB\n");
        printf("2. IDH\n");
        printf("3. Densidade\n");
        printf("4. População\n");
        printf("5. Area\n");
        printf("Sua escolha é: ");
        scanf("%d", &opcao);

        // Comparando os atributos escolhidos

        switch(opcao){
            case 1:
                if(pib1 > pib2){
                    printf("O %s tem um PIB maior que %s\n", nome1, nome2);
                }else{
                    printf("O %s tem um PIB maior que %s\n", nome2, nome1);
                }
                break;
            case 2:
                if(idh1 > idh2){
                    printf("O %s tem um IDH maior que a(o) %s\n", nome1, nome2);
                }else{
                    printf("O %s tem um IDH maior que a(o) %s\n", nome2, nome1);
                }
                break;
            case 3:
                if(densidade1 < densidade2){
                    printf("O %s tem uma densidade melhor que a(o) %s\n", nome1, nome2);
                }else{
                    printf("O %s tem uma densidade melhor que a(o) %s\n", nome2, nome1);
                }
                break;
            case 4:
                if(populacao1 > populacao2){
                    printf("O %s tem uma população maior que a(o) %s\n", nome1, nome2);
                }else{
                    printf("O %s tem uma população maior que a(o) %s\n", nome2, nome1);
                }
                break;
            case 5:
                if(area1 > area2){
                    printf("O %s tem uma área maior que a(o) %s\n", nome1, nome2);
                }else{
                    printf("O %s tem uma área maior que a(o) %s\n", nome2, nome1);
                }
                break;
            default:
                printf("Opção inválida!\n");

        }
return 0;
      }

