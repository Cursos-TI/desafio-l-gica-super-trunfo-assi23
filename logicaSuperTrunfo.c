#include <stdio.h>
#include <stdbool.h> 

//Exibe a mensagem de acordo com a propriedade bool passada. Como a lógica é sempre feita em cima primeiramente da carta 1, se for 1 a carta 1 venceu se fora 0 a carta 2 venceu.
void printarMensagem(bool comparacao){
    if(comparacao)
        printf("Carta 1 é a vencedora!\n");
    else
        printf("Carta 2 é a vencedora!\n");
}

int main() {
    // Variáveis da carta 1
    char estadoCarta1;
    char codigoCarta1[4];
    char nomeCidadeCarta1[60];
    unsigned long int populacaoCarta1;
    float areaEmKmCarta1;
    float pibCarta1;
    int numeroPontosTuristicosCarta1;
    float densidadePopulacionalCarta1;
    float pibPerCapitaCarta1;
    float superPoderCarta1;

    // Variáveis da carta 2
    char estadoCarta2;
    char codigoCarta2[4];
    char nomeCidadeCarta2[60];
    unsigned long  populacaoCarta2;
    float areaEmKmCarta2;
    float pibCarta2;
    int numeroPontosTuristicosCarta2;
    float densidadePopulacionalCarta2;
    float pibPerCapitaCarta2;
    float superPoderCarta2;

    printf("------------------------------------------------------------- \n");
    printf("----------------------- SUPER TRUNFO ------------------------ \n");
    printf("------------------------------------------------------------- \n \n");

    printf("Olá, bem-vindo ao Super Trunfo, abaixo realize o cadastro de duas cartas fornecendo as informações conforme solicitada.\n");
    printf("Lembrando que para inserir as informações utilize seu teclado e para confirmar suas alterações pressione a tecla Enter.\n");
    printf("Após o cadastro das cartas, elas serão exibidas abaixo.\n \n");

    printf("---------------------------------------------------------------------------------- \n");
    printf("----------------------- Realize o cadastramento da carta 1 ----------------------- \n");
    printf("---------------------------------------------------------------------------------- \n \n");

    printf("Informe o estado da carta (Ex: uma letra, A por exemplo): \n");
    scanf(" %c", &estadoCarta1);
    
    printf("Informe o código da carta (Ex: a letra do estado anterior e mais dois números: A01): \n");
    scanf("%s", codigoCarta1);

    getchar();

    printf("Informe o nome da cidade (Ex: São Paulo): \n");
    fgets(nomeCidadeCarta1, sizeof(nomeCidadeCarta1), stdin);

    printf("Informe a população (Ex: 12325000): \n");
    scanf("%lu", &populacaoCarta1);

    printf("Informe a área em Km² (Ex: 1521.11): \n");
    scanf("%f", &areaEmKmCarta1);

    printf("Informe o PIB (Ex: 699.28): \n");
    scanf("%f", &pibCarta1);

    printf("Informe o número de pontos turísticos (Ex: 30): \n");
    scanf("%d", &numeroPontosTuristicosCarta1);

    //Calcula a Densidade Populacional
    densidadePopulacionalCarta1 = populacaoCarta1 / areaEmKmCarta1;

    ////Calcula o PIB per Capita
    pibPerCapitaCarta1 = pibCarta1 / populacaoCarta1;

    superPoderCarta1 = populacaoCarta1 + areaEmKmCarta1 + pibCarta1 + numeroPontosTuristicosCarta1 + pibPerCapitaCarta1 + (1 / densidadePopulacionalCarta1);

    printf("--------------------------------------------------------------------------------------------------------- \n");
    printf("----------------------- Carta 1 registrada com sucesso Estado: %c ---------------------------------------- \n", estadoCarta1);
    printf("--------------------------------------------------------------------------------------------------------- \n \n");

    printf("---------------------------------------------------------------------------------- \n");
    printf("----------------------- Exibindo valor da Carta 1 ------------------------------- \n");
    printf("---------------------------------------------------------------------------------- \n \n");

    printf("Carta 1: \n");
    printf("Estado: %c \n", estadoCarta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCidadeCarta1);
    printf("População: %d \n", populacaoCarta1);
    printf("Área: %.2f km² \n", areaEmKmCarta1);
    printf("PIB: %.2f bilhões de reais \n", pibCarta1);
    printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f  hab/km² \n", densidadePopulacionalCarta1);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapitaCarta1);

    printf("---------------------------------------------------------------------------------- \n");
    printf("----------------------- Realize o cadastramento da carta 2 ----------------------- \n");
    printf("---------------------------------------------------------------------------------- \n \n");

    printf("Informe o estado da carta (Ex: uma letra, A por exemplo): \n");
    scanf(" %c", &estadoCarta2);
    
    printf("Informe o código da carta (Ex: a letra do estado anterior e mais dois números: A01): \n");
    scanf("%s", codigoCarta2);

    getchar();

    printf("Informe o nome da cidade (Ex: São Paulo): \n");
    fgets(nomeCidadeCarta2, sizeof(nomeCidadeCarta2), stdin);

    printf("Informe a população (Ex: 12325000): \n");
    scanf("%lu", &populacaoCarta2);

    printf("Informe a área em Km² (Ex: 1521.11): \n");
    scanf("%f", &areaEmKmCarta2);

    printf("Informe o PIB (Ex: 699.28): \n");
    scanf("%f", &pibCarta2);

    printf("Informe o número de pontos turísticos (Ex: 30): \n");
    scanf("%d", &numeroPontosTuristicosCarta2);

    //Calcula a Densidade Populacional
    densidadePopulacionalCarta2 = populacaoCarta2 / areaEmKmCarta2;

    ////Calcula o PIB per Capita
    pibPerCapitaCarta2 = pibCarta2 / populacaoCarta2;

    superPoderCarta2 = populacaoCarta2 + areaEmKmCarta2 + pibCarta2 + numeroPontosTuristicosCarta2 + pibPerCapitaCarta2 + (1 / densidadePopulacionalCarta2);

    printf("--------------------------------------------------------------------------------------------------------- \n");
    printf("----------------------- Carta 2 registrada com sucesso Estado: %c ---------------------------------------- \n", estadoCarta2);
    printf("--------------------------------------------------------------------------------------------------------- \n \n");

    printf("---------------------------------------------------------------------------------- \n");
    printf("----------------------- Exibindo valor da Carta 2 ------------------------------- \n");
    printf("---------------------------------------------------------------------------------- \n \n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", estadoCarta2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidadeCarta2);
    printf("População: %d \n", populacaoCarta2);
    printf("Área: %.2f km² \n", areaEmKmCarta2);
    printf("PIB: %.2f bilhões de reais \n", pibCarta2);
    printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f  hab/km² \n", densidadePopulacionalCarta2);
    printf("PIB per Capita: %.2f reais \n \n", pibPerCapitaCarta2);

    printf("---------------------------------------------------------------------------------- \n");
    printf("-----------------------   Comparando a População das Cartas  --------------------- \n");
    printf("---------------------------------------------------------------------------------- \n \n");

    bool comparacaoPopulacao = populacaoCarta1 > populacaoCarta2;

    printf("---------------------------------------------------------------------------------- \n");
    printf("-----------------------   Resultado das Cartas  ---------------------------------- \n");
    printf("---------------------------------------------------------------------------------- \n \n");

    printf("Comparação de Cartas:\n");
    printf("Carta 1 - Estado %c, Código: %s, População %d \n", estadoCarta1, codigoCarta1, populacaoCarta1);
    printf("Carta 2 - Estado %c, Código: %s, População %d \n", estadoCarta2, codigoCarta2, populacaoCarta2);
    printarMensagem(comparacaoPopulacao);

    printf("---------------------------------------------------------------------------------- \n");
    printf("----------------------- Programa Encerrado! -------------------------------------- \n");
    printf("---------------------------------------------------------------------------------- \n \n");

    return 0;
}
