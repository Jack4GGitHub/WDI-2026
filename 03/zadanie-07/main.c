#include <stdio.h>

double obliczSrednia(int tablicaLiczb[], int rozmiarTablicy)
{
    int sumaLiczb;
    int iTablicy;

    sumaLiczb = 0;
    for (iTablicy = 0; iTablicy < rozmiarTablicy; iTablicy++)
    {
        sumaLiczb += tablicaLiczb[iTablicy];
    }

    return (double)sumaLiczb / rozmiarTablicy;
}

void wypiszWiekszeOdSredniej(int tablicaLiczb[], int rozmiarTablicy, double sredniaWartosc)
{
    int iTablicy;

    printf("Liczby wieksze od sredniej (%.2f): ", sredniaWartosc);
    for (iTablicy = 0; iTablicy < rozmiarTablicy; iTablicy++)
    {
        if ((double)tablicaLiczb[iTablicy] > sredniaWartosc)
        {
            printf("%d ", tablicaLiczb[iTablicy]);
        }
    }
    printf("\n");
}

void wypiszMinIMax(int tablicaLiczb[], int rozmiarTablicy)
{
    int wartoscMin;
    int wartoscMax;
    int iTablicy;

    wartoscMin = tablicaLiczb[0];
    wartoscMax = tablicaLiczb[0];

    for (iTablicy = 1; iTablicy < rozmiarTablicy; iTablicy++)
    {
        if (tablicaLiczb[iTablicy] < wartoscMin)
        {
            wartoscMin = tablicaLiczb[iTablicy];
        }
        if (tablicaLiczb[iTablicy] > wartoscMax)
        {
            wartoscMax = tablicaLiczb[iTablicy];
        }
    }

    printf("Najmniejsza liczba: %d\n", wartoscMin);
    printf("Najwieksza liczba: %d\n", wartoscMax);
}

int obliczSumeNieparzystych(int tablicaLiczb[], int rozmiarTablicy)
{
    int sumaNieparzystych;
    int iTablicy;

    sumaNieparzystych = 0;
    for (iTablicy = 0; iTablicy < rozmiarTablicy; iTablicy++)
    {
        if (tablicaLiczb[iTablicy] % 2 != 0)
        {
            sumaNieparzystych += tablicaLiczb[iTablicy];
        }
    }

    return sumaNieparzystych;
}

void wypiszOdKonca(int tablicaLiczb[], int rozmiarTablicy)
{
    int iTablicy;

    printf("Tablica od konca: ");
    for (iTablicy = rozmiarTablicy - 1; iTablicy >= 0; iTablicy--)
    {
        printf("%d ", tablicaLiczb[iTablicy]);
    }
    printf("\n");
}

int main(void)
{
    int mojeLiczby[10];
    int rozmiarTablicy;
    int iTablicy;
    double wyliczonaSrednia;
    int sumaNieparzystychLiczb;

    rozmiarTablicy = 10;

    printf("Wprowadz 10 liczb calkowitych:\n");
    for (iTablicy = 0; iTablicy < rozmiarTablicy; iTablicy++)
    {
        printf("Liczba %d: ", iTablicy + 1);
        scanf("%d", &mojeLiczby[iTablicy]);
    }

    wyliczonaSrednia = obliczSrednia(mojeLiczby, rozmiarTablicy);
    printf("Srednia arytmetyczna: %.2f\n", wyliczonaSrednia);

    wypiszWiekszeOdSredniej(mojeLiczby, rozmiarTablicy, wyliczonaSrednia);

    wypiszMinIMax(mojeLiczby, rozmiarTablicy);

    
    sumaNieparzystychLiczb = obliczSumeNieparzystych(mojeLiczby, rozmiarTablicy);
    printf("Suma elementow nieparzystych: %d\n", sumaNieparzystychLiczb);

  wypiszOdKonca(mojeLiczby, rozmiarTablicy);

    return 0;
}
