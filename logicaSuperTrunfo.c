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
    int opcao1, opcao2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1 = 0, soma_c2 = 0;

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

   

    // Menu de escolha do primeiro atributo

    printf("\n=========== MENU DE COMPARAÇÃO ===========\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("===========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);

    // Menu de escolha do segundo atributo (dinâmico)
    printf("\n=========== MENU DE COMPARAÇÃO ===========\n");
    printf("Escolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == opcao1) continue;
        switch (i) {
            case 1: printf("%d - População\n", i); break;
            case 2: printf("%d - Área\n", i); break;
            case 3: printf("%d - PIB\n", i); break;
            case 4: printf("%d - Pontos Turísticos\n", i); break;
            case 5: printf("%d - Densidade Demográfica\n", i); break;
        }
    }
    printf("===========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    // Comparação do primeiro atributo
    printf("\n-------------------------------------------\n");
    printf("Comparando PRIMEIRO atributo:\n");

    switch (opcao1) {
        case 1:
            printf("População:\n");
            valor1_c1 = carta1.populacao;
            valor1_c2 = carta2.populacao;
            break;
        case 2:
            printf("Área:\n");
            valor1_c1 = carta1.area;
            valor1_c2 = carta2.area;
            break;
        case 3:
            printf("PIB:\n");
            valor1_c1 = carta1.pib;
            valor1_c2 = carta2.pib;
            break;
        case 4:
            printf("Pontos Turísticos:\n");
            valor1_c1 = carta1.pontos_turisticos;
            valor1_c2 = carta2.pontos_turisticos;
            break;
        case 5:
            printf("Densidade Demográfica:\n");
            valor1_c1 = carta1.densidade;
            valor1_c2 = carta2.densidade;
            break;
    }

    printf("%s: %.2f\n", carta1.nome_pais, valor1_c1);
    printf("%s: %.2f\n", carta2.nome_pais, valor1_c2);

    int resultado1 = (opcao1 == 5) ? 
        (valor1_c1 < valor1_c2 ? 1 : (valor1_c2 < valor1_c1 ? 2 : 0)) :
        (valor1_c1 > valor1_c2 ? 1 : (valor1_c2 > valor1_c1 ? 2 : 0));

    printf("Resultado: %s\n", 
        resultado1 == 1 ? carta1.nome_pais :
        resultado1 == 2 ? carta2.nome_pais :
        "Empate");

    // Comparação do segundo atributo
    printf("\n-------------------------------------------\n");
    printf("Comparando SEGUNDO atributo:\n");

    switch (opcao2) {
        case 1:
            printf("População:\n");
            valor2_c1 = carta1.populacao;
            valor2_c2 = carta2.populacao;
            break;
        case 2:
            printf("Área:\n");
            valor2_c1 = carta1.area;
            valor2_c2 = carta2.area;
            break;
        case 3:
            printf("PIB:\n");
            valor2_c1 = carta1.pib;
            valor2_c2 = carta2.pib;
            break;
        case 4:
            printf("Pontos Turísticos:\n");
            valor2_c1 = carta1.pontos_turisticos;
            valor2_c2 = carta2.pontos_turisticos;
            break;
        case 5:
            printf("Densidade Demográfica:\n");
            valor2_c1 = carta1.densidade;
            valor2_c2 = carta2.densidade;
            break;
    }

    printf("%s: %.2f\n", carta1.nome_pais, valor2_c1);
    printf("%s: %.2f\n", carta2.nome_pais, valor2_c2);

    int resultado2 = (opcao2 == 5) ? 
        (valor2_c1 < valor2_c2 ? 1 : (valor2_c2 < valor2_c1 ? 2 : 0)) :
        (valor2_c1 > valor2_c2 ? 1 : (valor2_c2 > valor2_c1 ? 2 : 0));

    printf("Resultado: %s\n", 
        resultado2 == 1 ? carta1.nome_pais :
        resultado2 == 2 ? carta2.nome_pais :
        "Empate");

    // Soma dos dois atributos
    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    printf("\n-------------------------------------------\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", carta1.nome_pais, soma_c1);
    printf("%s: %.2f\n", carta2.nome_pais, soma_c2);

    if (soma_c1 > soma_c2) {
        printf("Resultado Final: %s venceu!\n", carta1.nome_pais);
    } else if (soma_c2 > soma_c1) {
        printf("Resultado Final: %s venceu!\n", carta2.nome_pais);
    } else {
        printf("Resultado Final: Empate!\n");
    }

    printf("-------------------------------------------\n");













    return 0;
}