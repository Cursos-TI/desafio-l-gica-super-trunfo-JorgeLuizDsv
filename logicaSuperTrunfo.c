#include <stdio.h>

struct Carta {
    char estado[3];
    char codigo[4];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    
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
    printf("---------------------------\n");

    // Cálculo da densidade populacional
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    // Cálculo do PIB per capita
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

   
    //  COMPARAÇÃO POR POPULAÇÃO 
   

    printf("========================================\n");
    printf("Comparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("========================================\n");

    return 0;
}