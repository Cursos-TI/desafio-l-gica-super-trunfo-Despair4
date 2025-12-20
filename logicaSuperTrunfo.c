#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Variaveis da carta 1
	char estado;
    char codigoDaCarta[8];
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

    int resultado1,resultado2;

    int decisao,decisao2;

    printf("Digite qual atributo você deseja comprar\n");
    printf("1. População \n");
    printf("2. Area \n");
    printf("3. Pib\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Pib per capita\n");
    printf("7. Super poder\n");

    scanf("%d",&decisao);

    
    printf("Digite qual o segundo atributo você deseja comprar\n");
    printf("1. População \n");
    printf("2. Area \n");
    printf("3. Pib\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Pib per capita\n");
    printf("7. Super poder\n");

    scanf("%d",&decisao2);

switch (decisao)
    {
    case 1:
        printf("População:\n %s %d VS %s %d ",nomeDaCidade,populacao,nomeDaCidade2,populacao2);
        resultado1 = populacao > populacao2 ? 
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    case 2:
        printf("Area:\n %s %.2f VS %s %.2f ",nomeDaCidade,quilometrosQuadrados,nomeDaCidade2,quilometrosQuadrados2);
        resultado1 = quilometrosQuadrados > quilometrosQuadrados2 ?
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    case 3:
        printf("Pib:\n %s %.2f VS %s %.2f ",nomeDaCidade,Pib,nomeDaCidade2,Pib2);
        resultado1 = Pib > Pib2 ? 
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    case 4:
        printf("Quantidade de pontos turisticos:\n %s %d VS %s %d ",nomeDaCidade,QtdPontos_turisticos,nomeDaCidade2,QtdPontos_turisticos2);
        resultado1 = QtdPontos_turisticos > QtdPontos_turisticos2 ? 
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;

    case 5:
        // vence a carta com menor densidade populacional
        printf("Densidade populacional:\n %s %.2f VS %s %.2f ",nomeDaCidade,DensidadePopulacional,nomeDaCidade2,DensidadePopulacional2);
        resultado1 = DensidadePopulacional < DensidadePopulacional2 ?
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;

    case 6:
        printf("Pib Per capita:\n %s %.2f VS %s %.2f ",nomeDaCidade,PibPerCapita,nomeDaCidade2,PibPerCapita2);
        resultado1 = PibPerCapita > PibPerCapita2 ? 
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;

        case 7:
        printf("Super poder:\n %s %.2f VS %s %.2f ",nomeDaCidade,SuperPoder,nomeDaCidade2,SuperPoder2);
        resultado1 = SuperPoder > SuperPoder2 ?
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    default:

    printf("opção Invalida!\n");
        break;
    }

    if(decisao == decisao2) {
        printf("Atributo já comparado!");
    }
    else{

    switch (decisao2)
    {
    case 1:
        printf("População:\n %s %d VS %s %d ",nomeDaCidade,populacao,nomeDaCidade2,populacao2);
        resultado2 = populacao > populacao2 ? 
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    case 2:
        printf("Area:\n %s, %.2f VS %s %.2f ",nomeDaCidade,quilometrosQuadrados,nomeDaCidade2,quilometrosQuadrados2);
        resultado2 = quilometrosQuadrados > quilometrosQuadrados2 ?
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    case 3:
        printf("Pib:\n %s, %.2f VS %s %.2f ",nomeDaCidade,Pib,nomeDaCidade2,Pib2);
        resultado2 = Pib > Pib2 ? 
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    case 4:
        printf("Quantidade de pontos turisticos:\n %s %d VS %s %d ",nomeDaCidade,QtdPontos_turisticos,nomeDaCidade2,QtdPontos_turisticos2);
        resultado2 = QtdPontos_turisticos > QtdPontos_turisticos2 ? 
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    case 5:
        // vence a carta com menor densidade populacional
        printf("Densidade populacional:\n %s %.2f VS %s %.2f ",nomeDaCidade,DensidadePopulacional,nomeDaCidade2,DensidadePopulacional2);
        resultado2 = DensidadePopulacional < DensidadePopulacional2 ?
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;
    case 6:
        printf("Pib Per capita:\n %s %.2f VS %s %.2f ",nomeDaCidade,PibPerCapita,nomeDaCidade2,PibPerCapita2);
        resultado2 = PibPerCapita > PibPerCapita2 ? 
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf(" Vence!\n");
    break;

        case 7:
        printf("Super poder:\n %s %.2f VS %s %.2f ",nomeDaCidade,SuperPoder,nomeDaCidade2,SuperPoder2);
        resultado2 = SuperPoder > SuperPoder2 ?
        printf("%s",nomeDaCidade) :
        printf("%s",nomeDaCidade2);
        printf( "Vence!\n");
    break;
    default:

    printf("opção Invalida!\n");
        break;
    }

}

    if(resultado1 && resultado2) {
        printf("Parabens você venceu");
    }
    else if (resultado1 || resultado2){
        printf("Empate!");
    }
    else{
        printf("Infelizmente você perdeu :(");
    }

return 0;
}
