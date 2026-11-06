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

void wyswietlWOdS(int tablicaLiczb[], int rozmiarTablicy, double sredniaWartosc)
{
    int indexTablicy;

    printf("Elementy wieksze od sredniej (%.2f):\n", sredniaWartosc);
    for (indexTablicy = 0; indexTablicy < rozmiarTablicy; indexTablicy++)
    {
        if ((double)tablicaLiczb[indexTablicy] > sredniaWartosc)
        {
            printf("%d ", tablicaLiczb[indexTablicy]);
        }
    }
    printf("\n");
}

int main(void)
{
    int mojeLiczby[5];
    int rozmiarTablicy;
    int iTablicy;
    double wyliczonaSrednia;

    rozmiarTablicy = 5;

    printf("Wprowadz 5 liczb calkowitych:\n");
    for (iTablicy = 0; iTablicy < rozmiarTablicy; iTablicy++)
    {
        printf("Liczba %d: ", iTablicy + 1);
        scanf("%d", &mojeLiczby[iTablicy]);
    }

    wyliczonaSrednia = obliczSrednia(mojeLiczby, rozmiarTablicy);
    wyswietlWOdS(mojeLiczby, rozmiarTablicy, wyliczonaSrednia);

    return 0;
}
