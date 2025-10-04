#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

 //*==== variaveis carta 1:
   char estado [15];
   char codigo [5];
   char cidade [20];
   int populacao; 
   int pontoturistico;
   float area;
   float pib;
   float pibBilhoes;
   float densidadePopulacional; 
   float Pibpercapita;
   float superpoder;

    //*==== variaveis carta 2:
   char estado2 [15];
   char codigo2 [5];
   char cidade2 [20];
   int populacao2; 
   int pontoturistico2;
   float area2;
   float pib2;
   float pibBilhoes2;
   float densidadePopulacional2; 
   float Pibpercapita2;
   float superpoder2;


   printf("\n==== cadastro da CARTA 1 ====\n");

   printf("digite seu estado:\n");
   scanf("%s", estado);

   printf("codigo: \n");
   scanf("%s", codigo);

   printf("nome da cidade: \n");
   scanf("%s",cidade);

   printf("total de habitantes: \n");
   scanf("%d",&populacao);

   printf("area (km²): \n");
   scanf("%f" ,&area);

   printf("pib ( em bilhoes de reais): \n");
   scanf("%f" ,&pibBilhoes);

   printf("quantidades de pontos turisticos: \n");
   scanf("%d", &pontoturistico);

   //calculos para carta1

   pib = pibBilhoes * 1000000000;
   densidadePopulacional =  (float)populacao / (float)area;
   Pibpercapita = (float)pib /  (float) populacao;
   superpoder = (float) populacao + area + pib + pontoturistico + densidadePopulacional + Pibpercapita +(1.0 / densidadePopulacional);
   
   printf("\n==== cadastro da CARTA 2 ====\n");
  printf("digite seu estado: \n");
   scanf("%s", estado2);

   printf("codigo: \n");
   scanf("%s", codigo2);

   printf("nome da cidade: \n");
   scanf("%s",cidade2);

   printf("total de habitantes: \n");
   scanf("%d",&populacao2);

   printf("area (km²): \n");
   scanf("%f" ,&area2);

   printf("pib ( em bilhoes de reais): \n");
   scanf("%f" ,&pibBilhoes2);

   printf("quantidades de pontos turisticos: \n");
   scanf("%d", &pontoturistico2);
   
   //calculos para carta2
   
   pib2 = pibBilhoes2 * 1000000000;
   densidadePopulacional2 = (float) populacao2 / area2;
   Pibpercapita2 = (float) pib2 / (float) populacao2;
   superpoder2 = (float) populacao2 + area2 + pib2 + pontoturistico2 + densidadePopulacional2 + Pibpercapita2 + (1.0 / densidadePopulacional2);


  // menu interativo 
  int escolha;

  printf("\n==== escolha o atributo para comparar \n ====");
  printf("1 - população\n ");
  printf("2 - Area \n ");
  printf("3 - Pib\n ");
  printf("4 - Pontos turisticos \n ");
  printf("5 - densidade demografica\n ");
  printf("escolher :");
  scanf("%d",&escolha);

 printf("\n ===== resultado da comparação === \n");
 printf("carta 1 : %s \n", estado);
 printf(" \n......... x ........... \n");
 printf("carta 2 : %s  \n", estado2);
 printf("\n ===================================== \n");
 // comparacao com switch 
 switch (escolha)
 {
 case 1: // populacao
     printf("Atributo Escolhido : POPULAÇÃO \n");
     printf("\n ================================ \n");
     printf("%s: %d habitantes\n", estado , populacao);
     printf("\n _________ vs __________ \n");
     printf("%s: %d habitantes\n", estado2 , populacao2);
     printf("\n ================================ \n");

     if (populacao > populacao2)
        printf("O VENCEDOR É :  %s \n", estado);
     else if (populacao2 > populacao)
         printf("VENCEDOR É :  %s \n", estado2);
     else 
        printf("EMPATE!\n");
    break;

    case 2: // area
     printf("Atributo Escolhido : area \n");
     printf("\n ================================ \n");
     printf("%s: %.2f km²  \n", estado , area);
     printf("\n _________ vs __________ \n");
     printf("%s: %.2f km²\n", estado2 , area2);
     printf("\n ================================ \n");

     if (area > area2)
        printf("vencedor %s \n", estado);
     else if (area2 > area)
         printf("vencedor %s \n", estado2);
     else 
        printf("empate!\n");
    break;

    case 3: // PIB
     printf("Atributo Escolhido : PIB \n");
     printf("\n ================================ \n");
     printf("%s: %.2f bilhoes pib \n", estado , pibBilhoes);
     printf("\n _________ vs __________ \n");
     printf("%s: %.2f bilhoes \n", estado2 , pibBilhoes2);
     printf("\n ================================ \n");

     if (pib > pib2)
        printf("vencedor %s \n", estado);
     else if (pib2 > pib)
         printf("vencedor %s \n", estado2);
     else 
        printf("empate!\n");
    break;

    case 4: // Pontos turisticos
     printf("Atributo Escolhido : Pontos turisticos \n");
     printf("\n ================================ \n");
     printf("%s: %d Pontos turisticos\n", estado , pontoturistico);
     printf("\n _________ vs __________ \n");
     printf("%s: %d Pontos turisticos\n", estado2 , pontoturistico2);
     printf("\n ================================ \n");

     if (pontoturistico > pontoturistico2)
        printf("vencedor %s \n", estado);
     else if (pontoturistico2 > pontoturistico)
         printf("vencedor %s \n", estado2);
     else 
        printf("empate!\n");
    break;

    case 5: // densidade demografica ( MENOR VALOR VENCE )
     printf("Atributo Escolhido : densidade demografica  \n");
     printf("\n ================================ \n");
     printf("%s: %.2f hab /km²\n", estado , densidadePopulacional);
     printf("\n _________ vs __________ \n");
     printf("%s: %.2f hab / km² \n", estado2 , densidadePopulacional2);
     printf("\n ================================ \n");

     if (densidadePopulacional < densidadePopulacional2)
        printf("vencedor %s \n", estado);
     else if (densidadePopulacional2 < densidadePopulacional)
         printf("vencedor %s \n", estado2);
     else 
        printf("empate!\n");
    break;

 
 default:
   printf(" OPCAO INVALIDA ! \n");
    break;
 }
   return 0;













}
