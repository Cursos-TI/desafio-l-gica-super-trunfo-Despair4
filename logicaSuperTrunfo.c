#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio


    //Variaveis da carta 1
	char estado;
    char codigoDaCarta[5];
    char nomeDaCidade[50];
    unsigned long int populacao = 0;
    float quilometrosQuadrados = 0;  
    float Pib = 0;
    int QtdPontos_turisticos = 0;
    float DensidadePopulacional = 0;
    float PibPerCapita = 0;
    float SuperPoder = 0;


    //Entrada das informações carta 1
    printf("---- Carta 1 ---- \nDigite o Estado :");
    scanf(" %c", &estado);

    printf("Digite o codigo da Carta:");
    scanf("%s",&codigoDaCarta);

    printf("Digite o nome da cidade:");
    scanf("%s",&nomeDaCidade);

    printf("Digite a população:");
    scanf("%d",&populacao);

    printf("Digite a Area em quilometros quadrados:");
    scanf("%f",&quilometrosQuadrados);

    printf("Digite o PIB:");
    scanf("%f",&Pib);

    printf("Digite quantos pontos turisticos:");
    scanf("%d",&QtdPontos_turisticos);

	printf("---- Carta 2 ---- \n");

  /*------------------------------------------------------------------------------------------------*/

  //Variaveis da carta2
	char estado2;
	char codigoDaCarta2[4];
	char nomeDaCidade2[50];
	unsigned long int populacao2 = 0;
	float quilometrosQuadrados2 = 0;
	float Pib2 = 0;
	int QtdPontos_turisticos2 = 0;
    float DensidadePopulacional2 = 0;
    float PibPerCapita2 = 0;
    float SuperPoder2 = 0;

    // Carta 2

    //Entrada das informações da carta 2
    printf("Digite o Estado :");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta:");
    scanf("%s",&codigoDaCarta2);

    printf("Digite o nome da cidade:");
    scanf("%s",&nomeDaCidade2);

    printf("Digite a população:");
    scanf("%d",&populacao2);

    printf("Digite a Area em quilometros quadrados:");
    scanf("%f",&quilometrosQuadrados2);

    printf("Digite o PIB:");
    scanf("%f",&Pib2);

    printf("Digite quantos pontos turisticos:");
    scanf("%d",&QtdPontos_turisticos2);


    // Calculo Das propriedades Cidade 1
    DensidadePopulacional = (float)populacao/quilometrosQuadrados;
    PibPerCapita = (float)Pib/populacao;

    SuperPoder = (float)(populacao + quilometrosQuadrados + Pib + QtdPontos_turisticos - DensidadePopulacional + PibPerCapita2);
    
    // Calculo Das propriedades Cidade 2
    DensidadePopulacional2 = (float)populacao2/quilometrosQuadrados2;
    PibPerCapita2 = (float)Pib2/populacao2;

    SuperPoder2 = (float)(populacao2 + quilometrosQuadrados2 + Pib2 + QtdPontos_turisticos2 - DensidadePopulacional2 + PibPerCapita2);

    printf("Carta 1 - %c, %s, %f \n",estado,nomeDaCidade,Pib);
    printf("Carta 2 - %c, %s, %f \n",estado2,nomeDaCidade2,Pib2);

    char cidadeVencedora[50];

    int decisao = -1;

    printf("Digite qual atributo você deseja comprar\n");
    printf("1. População \n");
    printf("2. Area \n");
    printf("3. Pib\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Pib per capita\n");
    printf("7. Super poder\n");

    scanf("%d",&decisao);

    switch (decisao)
    {
    case 1:
            if (populacao > populacao2){
        printf("População da carta 1 é maior que a População da carta 2!\n");
        printf("%s vence!",nomeDaCidade);
    }
    else if (populacao2 > populacao){
        printf("População da carta 2 é maior que a População da carta 1!\n");
        printf("%s vence!\n",nomeDaCidade2);
    }
    else{
        printf("Empate !");
    }
        break;

    case 2:
            if (quilometrosQuadrados > quilometrosQuadrados2){
        printf("Area da carta 1 é maior que a Area da carta 2!\n");
        printf("%s vence!",nomeDaCidade);
    }
    else if (quilometrosQuadrados2 > quilometrosQuadrados){
        printf("Area da carta 2 é maior que a Area da carta 1!\n");
        printf("%s vence!\n",nomeDaCidade2);
    }
    else{
        printf("Empate !");
    }
    break;
    case 3:
            if (Pib > Pib2){
        printf("Pib da carta 1 é maior que a Pib da carta 2!\n");
        printf("%s vence!",nomeDaCidade);
    }
    else if (Pib2 > Pib){
        printf("Pib da carta 2 é maior que a Pib da carta 1!\n");
        printf("%s vence!\n",nomeDaCidade2);
    }
    else{
        printf("Empate !");
    }
    break;
    case 4:
            if (QtdPontos_turisticos > QtdPontos_turisticos2){
        printf("carta 1 tem mais pontos turisticos que a carta 2!\n");
        printf("%s vence!",nomeDaCidade);
    }
    else if (QtdPontos_turisticos2 > QtdPontos_turisticos){
        printf("carta 2 tem mais pontos turisticos que a carta 1!\n");
        printf("%s vence!\n",nomeDaCidade2);
    }
    else{
        printf("Empate !");
    }
    break;

    case 5:
        // vence quem tem a menor densidade populacional
        if (DensidadePopulacional < DensidadePopulacional2){
        printf("DensidadePopulacional da carta 2 é maior que a DensidadePopulacional da carta 1!\n");
        printf("%s vence!",nomeDaCidade);
    }
    else if (DensidadePopulacional2 < DensidadePopulacional){
        printf("DensidadePopulacional da carta 1 é maior que a DensidadePopulacional da carta 2!\n");
        printf("%s vence!\n",nomeDaCidade2);
    }
    else{
        printf("Empate !");
    }
    break;

    case 6:
            if (PibPerCapita > PibPerCapita2){
        printf("carta 1 tem PibPerCapita Maior que a carta 2!\n");
        printf("%s vence!",nomeDaCidade);
    }
    else if (PibPerCapita2 > PibPerCapita){
        printf("carta 2 tem PibPerCapita Maior que a carta 1!!\n");
        printf("%s vence!\n",nomeDaCidade2);
    }
    else{
        printf("Empate !");
    }
    break;

        case 7:
            if (SuperPoder > SuperPoder2){
        printf("carta 1 tem SuperPoder Maior que a carta 2!\n");
        printf("%s vence!",nomeDaCidade);
    }
    else if (SuperPoder < SuperPoder2){
        printf("carta 2 tem SuperPoder Maior que a carta 1!!\n");
        printf("%s vence!\n",nomeDaCidade2);
    }
    else{
        printf("Empate !");
    }
    break;
    default:

    printf("opção Invalida!\n");
        break;
    }

    printf("\n");
    return 0;
}
