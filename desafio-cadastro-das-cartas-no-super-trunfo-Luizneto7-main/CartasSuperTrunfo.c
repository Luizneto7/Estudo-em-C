#include <stdio.h>
#include <string.h>

int main()
{
    char state1[5], cardCode1[5], cityName1[31];
    unsigned long int population1;
    int scoreboard1 = 0, scoreboard2 = 0;
    int touristAttraction1, attributeChoice1, attributeChoice2, attributeChoice3;
    float superPower1;
    double area1, pib1, pibPerCapita1, populationDensity1;
    char selectedAttribute1[20], selectedAttribute2[20], selectedAttribute3[20];

    char state2[5], cardCode2[5], cityName2[31];
    unsigned long int population2;
    int touristAttraction2;
    float superPower2;
    double area2, pib2, pibPerCapita2, populationDensity2;

    printf("\n\n\n******* Seja bem vindo ao Super Trunfo versão países *******\n\n");
    printf("Esse jogo consiste em comparar duas cartas previamente registradas e ganha a que tiver os maiores atributos.\n\n");
    printf("Registre a primeira carta\n\n");

    printf("Informe o estado da primeira cidade:\n");
    scanf("%2s", state1);
    printf("informe o código da cidade:\n");
    scanf("%2s", cardCode1);
    printf("Informe o nome da cidade:\n");
    scanf("%30s", cityName1);
    printf("Informe a população da cidade:\n");
    scanf("%lu", &population1);
    printf("Informe a área da cidade:\n");
    scanf("%lf", &area1);
    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib1);
    printf("Informe a quantidade de pontos turísticos da cidade:\n");
    scanf("%i", &touristAttraction1);

    pibPerCapita1 = (double)pib1 / population1;
    populationDensity1 = (double)population1 / area1;
    superPower1 = (float)(1 / populationDensity1) + population1 + area1 + pib1 + pibPerCapita1 + touristAttraction1;

    printf("\n\n******* Carta 1 registrada *******\n\n\n");
    printf("Registre a segunda carta\n\n");

    printf("Informe o estado da segunda cidade:\n");
    scanf("%2s", state2);
    printf("informe o código da cidade:\n");
    scanf("%2s", cardCode2);
    printf("Informe o nome da cidade:\n");
    scanf("%30s", cityName2);
    printf("Informe a população da cidade:\n");
    scanf("%lu", &population2);
    printf("Informe a área da cidade:\n");
    scanf("%lf", &area2);
    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib2);
    printf("Informe a quantidade de pontos turísticos da cidade:\n");
    scanf("%i", &touristAttraction2);

    pibPerCapita2 = (double)pib2 / population2;
    populationDensity2 = (double)population2 / area2;
    superPower2 = (float)(1 / populationDensity2) + population2 + area2 + pib2 + pibPerCapita2 + touristAttraction2;

    printf("\n\n******* cartas registradas *******\n\n\n");

    printf("Carta 1:\n\n Estado: %s\n Código: %s%s\n Nome da cidade: %s\n População: %lu\n Área: %.2lf (km²)\n PIB: R$ %.2lf Bilhões de reais\n N° de Pontos Turísticos: %i\n PIB per capita: %.2lf\n Densidade Demográfica: %lf\n Super Poder: %.2f\n\n", state1, state1, cardCode1, cityName1, population1, area1, pib1 / 1e9, touristAttraction1, pibPerCapita1, populationDensity1, superPower1);
    printf("Carta 2:\n\n Estado: %s\n Código: %s%s\n Nome da cidade: %s\n População: %lu\n Área: %.2lf (km²)\n PIB: R$ %.2lf Bilhões de reais\n N° de Pontos Turísticos: %i\n PIB per capita: %.2lf\n Densidade Demográfica: %lf\n Super Poder: %.2f\n\n", state2, state2, cardCode2, cityName2, population2, area2, pib2 / 1e9, touristAttraction2, pibPerCapita2, populationDensity2, superPower2);

    printf("Escolha o primeiro atributo para ser comparados nessa partida:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. PIB Per Capita\n");
    printf("6. Densidade Demográfica\n");
    printf("7. Super Poder\n");
    scanf("%d", &attributeChoice1);

    switch (attributeChoice1)
    {
    case 1:
        if (population1 == population2)
        {
            scoreboard1++;
            scoreboard2++;
        }
        else if (population1 > population2)
        {
            scoreboard1++;
        }
        else
        {
            scoreboard2++;
        }
        break;
    case 2:
        if (area1 == area2)
        {
            scoreboard1++;
            scoreboard2++;
        }
        else if (area1 > area2)
        {
            scoreboard1++;
        }
        else
        {
            scoreboard2++;
        }
        break;
    case 3:
        if (pib1 == pib2)
        {
            scoreboard1++;
            scoreboard2++;
        }
        else if (pib1 > pib2)
        {
            scoreboard1++;
        }
        else
        {
            scoreboard2++;
        }
        break;
    case 4:
        if (touristAttraction1 == touristAttraction2)
        {
            scoreboard1++;
            scoreboard2++;
        }
        else if (touristAttraction1 > touristAttraction2)
        {
            scoreboard1++;
        }
        else
        {
            scoreboard2++;
        }
        break;
    case 5:
        if (pibPerCapita1 == pibPerCapita2)
        {
            scoreboard1++;
            scoreboard2++;
        }
        else if (pibPerCapita1 > pibPerCapita2)
        {
            scoreboard1++;
        }
        else
        {
            scoreboard2++;
        }
        break;
    case 6:
        if (populationDensity1 == populationDensity2)
        {
            scoreboard1++;
            scoreboard2++;
        }
        else if (populationDensity1 > populationDensity2)
        {
            scoreboard1++;
        }
        else
        {
            scoreboard2++;
        }
        break;
    case 7:
        if (superPower1 == superPower2)
        {
            scoreboard1++;
            scoreboard2++;
        }
        else if (superPower1 > superPower2)
        {
            scoreboard1++;
        }
        else
        {
            scoreboard2++;
        }
        break;

    default:
        printf("Erro, verifique o código!");
        break;
    }

    printf("\n\nEscolha o segundo atributo para ser comparados nessa partida:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. PIB Per Capita\n");
    printf("6. Densidade Demográfica\n");
    printf("7. Super Poder\n");
    scanf("%d", &attributeChoice2);

    if (attributeChoice1 == attributeChoice2)
    {
        printf("Você escolheu o mesmo atributo da partida passada, recomece o jogo.");

        return 0;
    }
    else if (attributeChoice1 != attributeChoice2)
    {
        switch (attributeChoice2)
        {
        case 1:
            if (population1 == population2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (population1 > population2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 2:
            if (area1 == area2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (area1 > area2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 3:
            if (pib1 == pib2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (pib1 > pib2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 4:
            if (touristAttraction1 == touristAttraction2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (touristAttraction1 > touristAttraction2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 5:
            if (pibPerCapita1 == pibPerCapita2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (pibPerCapita1 > pibPerCapita2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 6:
            if (populationDensity1 == populationDensity2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (populationDensity1 > populationDensity2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 7:
            if (superPower1 == superPower2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (superPower1 > superPower2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;

        default:
            printf("Erro, verifique o código!");
            break;
        }
    }

    printf("\n\nEscolha o terceiro atributo para ser comparados nessa partida:\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. PIB Per Capita\n");
    printf("6. Densidade Demográfica\n");
    printf("7. Super Poder\n");
    scanf("%d", &attributeChoice3);

    if (attributeChoice3 == attributeChoice1 || attributeChoice3 == attributeChoice2)
    {
        printf("Você escolheu o mesmo atributo anterior, recomece o jogo.");

        return 0;
    }
    else
    {
        switch (attributeChoice3)
        {
        case 1:
            if (population1 == population2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (population1 > population2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 2:
            if (area1 == area2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (area1 > area2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 3:
            if (pib1 == pib2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (pib1 > pib2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 4:
            if (touristAttraction1 == touristAttraction2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (touristAttraction1 > touristAttraction2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 5:
            if (pibPerCapita1 == pibPerCapita2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (pibPerCapita1 > pibPerCapita2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 6:
            if (populationDensity1 == populationDensity2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (populationDensity1 > populationDensity2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;
        case 7:
            if (superPower1 == superPower2)
            {
                scoreboard1++;
                scoreboard2++;
            }
            else if (superPower1 > superPower2)
            {
                scoreboard1++;
            }
            else
            {
                scoreboard2++;
            }
            break;

        default:
            printf("Erro, verifique o código!");
            break;
        }

        if (scoreboard1 == scoreboard2)
        {
            printf("\n\nEmpate!!\nPlacar Final\n\nCarta 1: %d\nCarta 2: %d", scoreboard1, scoreboard2);
        }
        else if (scoreboard1 > scoreboard2)
        {
            printf("\n\nParabéns!! Você venceu!!\nPlacar Final\n\nCarta 1: %d\nCarta 2: %d", scoreboard1, scoreboard2);
        }
        else
        {
            printf("\n\nVocê perdeu!!\nPlacar Final\n\nCarta 1: %d\nCarta 2: %d", scoreboard1, scoreboard2);
        }
    }

    printf("\n\n\n\n******* Fim do embate *******\n\n");

    return 0;
}
