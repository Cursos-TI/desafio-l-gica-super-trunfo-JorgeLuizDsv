#include <stdio.h>
#include <string.h>

struct Carta
{
    char estado[3];
    char codigo[4];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    char nome_pais[30]
    
};

int main()
{
    struct Carta carta1, carta2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    int opcao;

    // Leitura dos dados da primeira carta

    printf("Preencha os dados da CARTA 1:\n");

    printf("Estado (UF): ");
    scanf("%s", carta1.estado);

    printf("Código (Ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n");

    // Leitura dos dados da segunda carta

    printf("Preencha os dados da CARTA 2:\n");

    printf("Estado (UF): ");
    scanf("%s", carta2.estado);

    printf("Código (Ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\n");

    // Exibição da primeira carta

    printf("---------------------------\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    // Exibição da segunda carta
    printf("---------------------------\n");
    printf("CARTA 2\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("---------------------------\n");

    // Cálculos para a carta 1
    densidade1 = carta1.populacao / carta1.area;
    pib_per_capita1 = (carta1.pib * 1000000000) / carta1.populacao;

    // Cálculos para a carta 2
    densidade2 = carta2.populacao / carta2.area;
    pib_per_capita2 = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição da primeira carta
    printf("---------------------------\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição da segunda carta
    printf("---------------------------\n");
    printf("CARTA 2\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);


    // Cálculo da densidade populacional
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    // Cálculo do PIB per capita
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

    // Menu de escolha

    printf("\n=========== MENU DE COMPARAÇÃO ===========\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("===========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n-------------------------------------------\n");

    switch (opcao)
    {
    case 1:
        printf("Comparando População:\n");
        printf("%s: %d habitantes\n", carta1.nome_pais, carta1.populacao);
        printf("%s: %d habitantes\n", carta2.nome_pais, carta2.populacao);

        if (carta1.populacao > carta2.populacao)
        {
            printf("Resultado: %s venceu!\n", carta1.nome_pais);
        }
        else if (carta2.populacao > carta1.populacao)
        {
            printf("Resultado: %s venceu!\n", carta2.nome_pais);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 2:
        printf("Comparando Área:\n");
        printf("%s: %.2f km²\n", carta1.nome_pais, carta1.area);
        printf("%s: %.2f km²\n", carta2.nome_pais, carta2.area);

        if (carta1.area > carta2.area)
        {
            printf("Resultado: %s venceu!\n", carta1.nome_pais);
        }
        else if (carta2.area > carta1.area)
        {
            printf("Resultado: %s venceu!\n", carta2.nome_pais);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 3:
        printf("Comparando PIB:\n");
        printf("%s: %.2f bilhões\n", carta1.nome_pais, carta1.pib);
        printf("%s: %.2f bilhões\n", carta2.nome_pais, carta2.pib);

        if (carta1.pib > carta2.pib)
        {
            printf("Resultado: %s venceu!\n", carta1.nome_pais);
        }
        else if (carta2.pib > carta1.pib)
        {
            printf("Resultado: %s venceu!\n", carta2.nome_pais);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 4:
        printf("Comparando Número de Pontos Turísticos:\n");
        printf("%s: %d pontos\n", carta1.nome_pais, carta1.pontos_turisticos);
        printf("%s: %d pontos\n", carta2.nome_pais, carta2.pontos_turisticos);

        if (carta1.pontos_turisticos > carta2.pontos_turisticos)
        {
            printf("Resultado: %s venceu!\n", carta1.nome_pais);
        }
        else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
        {
            printf("Resultado: %s venceu!\n", carta2.nome_pais);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 5:
        printf("Comparando Densidade Demográfica:\n");
        printf("%s: %.2f hab/km²\n", carta1.nome_pais, carta1.densidade);
        printf("%s: %.2f hab/km²\n", carta2.nome_pais, carta2.densidade);

        if (carta1.densidade < carta2.densidade)
        {
            printf("Resultado: %s venceu! (menor densidade)\n", carta1.nome_pais);
        }
        else if (carta2.densidade < carta1.densidade)
        {
            printf("Resultado: %s venceu! (menor densidade)\n", carta2.nome_pais);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    default:
        printf("Opção inválida. Por favor, escolha uma opção de 1 a 5.\n");
        break;
    }

    printf("-------------------------------------------\n");

    return 0;
}