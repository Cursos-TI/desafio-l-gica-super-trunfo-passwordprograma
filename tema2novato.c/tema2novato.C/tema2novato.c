#include <stdio.h>

int main () {

    
    

    // ----------------- CARTA 1 ------------------
    //                    Amazonas
  
   int opcao;

    char carta1;          
    char estado_01[50];
    char nomeCidade_01[50];
    char codigo_01[10];
    float area_01 = 1.523;
    float PIB_01 = 45.511;
    int pontoTuristicos_01 = 30;
    int populacao_01 = 1147550;
    float densidade_1;
    float pib_per_capita_1;
    //float superPoder_1;
    
    printf("Calculo da densidade populacional do Amazonas \n");

    //cálculo da densidade populaciona carta 1
    
    densidade_1 = populacao_01 / area_01;

    // calculo de PIB per Capita da carta 1

    pib_per_capita_1 = PIB_01 / populacao_01;

    printf("Densidade Populacional: %.2f\n",densidade_1);


    //    ------------------------CARTA 2 -----------------
    //                   Brasil
   char carta2;
    char estado_2[50];
    char nomeCidade_2[50];
    char codigo_2[10];
    float area_2  = 8.200;
    float PIB_2 = 349.64;
    int pontoTuristicos_2 = 50;
    int populacao_2 = 6511630;
    float densidade_2;
    float pib_per_capita_2;
    //float superPoder_2;

    printf("Calculo da densidade populacional do Brasil \n");

    // cálculo da densidade populaciona carta 2

 densidade_2 = populacao_2 / area_2;

 // calculo de PIB per Capita da carta 1

    pib_per_capita_2 = PIB_2 / populacao_2;

    printf("Densidade Populacional: %.2f\n",densidade_2);

   //IMPRIMIR OS DADOS DA ATRIBUIÇAO POPULAÇAO 
   
   printf("%d", &populacao_01 );
   printf("\n");

   printf("%d", &populacao_2);
   printf("\n");

 
        // COMPARAÇAO DAS CARTAS (1 E 2) COM ATRIBUIÇAO (POPULAÇAO)

   printf("Comparação de cartas (Atributo: População carta 1 e carta 2)");
   printf("\n");

   if (populacao_01 > populacao_2){

    printf ("RESULTADO:A carta 1 venceu --- Amazonas \n");

   }else(populacao_2 > populacao_01);{ 

   printf("RESULTADO: A carta 2 Brasil \n");
   }
  
}