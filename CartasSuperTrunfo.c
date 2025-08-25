#include<stdio.h>
#include<string.h>

int main()
{   //Variaveis para a carta 1
    unsigned long int populacao1;
    int pontos1;
    float area1, pib1, densidade1, superpoder1, pibcapita1;
    char cidade1[20], estado1[20], codigo1[5];

    printf("### CARTA 1 ###\n");
    printf("\nUma letra de A-H para o estado:\n");
    scanf("%19s", estado1);

    printf("Código da carta, estado seguido de 01 a 04:\n");
    scanf("%4s", codigo1);

    while (getchar() != '\n');

    printf("Qual a cidade?\n");
    fgets(cidade1, 20, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // remove o \n do final

    printf("quantos habitantes na cidade?\n");
    scanf("%d", &populacao1);

    printf("Qual a área em km²?\n");
    scanf("%f", &area1);

    printf("Qual o PIB?\n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibcapita1 = pib1 / populacao1;
    //calculo do super poder
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibcapita1 + (1 / densidade1);

    //Variaveis para a carta 2
    unsigned long int populacao2;
    int pontos2;
    float area2, pib2, densidade2, superpoder2, pibcapita2;
    char cidade2[20], estado2[20], codigo2[5];

    printf("### CARTA 2 ###\n");
    printf("\nUma letra de A-H para o estado:\n");
    scanf("%19s", estado2);

    printf("Código da carta, estado seguido de 01 a 04:\n");
    scanf("%4s", codigo2);

    while (getchar() != '\n');

    printf("Qual a cidade?\n");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // remove o \n do final

    printf("quantos habitantes na cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual a área em km²?\n");
    scanf("%f", &area2);

    printf("Qual o PIB?\n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibcapita2 = pib2 / populacao2;
    //calculo do super poder
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibcapita2 + (1 / densidade2);

    //Resultados da carta 1
    printf("\n### RESULTADOS DA CARTA 1 ###\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %d\n", populacao1);
    printf("Área em Km²: %.2fKm²\n", area1);
    printf("PIB da cidade: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);


        //Resultados da carta 2
    printf("\n### RESULTADOS DA CARTA 2 ###\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %d\n", populacao2);
    printf("Área em Km²: %.2fKm²\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
    
    //resultado de quem venceu
    printf("\n### COMPARAÇÃO DE CARTAS ###\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("Pib: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("densidade populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("Pib per capita: Carta 1 venceu (%d)\n", pibcapita1 > pibcapita2);
    printf("super poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);
    return 0;
}