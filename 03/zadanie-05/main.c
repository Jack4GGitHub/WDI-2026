
#include <stdio.h>

void wyswietlForOdPoczatku(int tablicaLiczb[], int rozmiarTablicy)
{
    int indexTablicy;

    for (indexTablicy = 0; indexTablicy < rozmiarTablicy; indexTablicy++)
    {
        printf("%d ", tablicaLiczb[indexTablicy]);
    }
    printf("\n");
}

void wyswietlWhileOdPoczatku(int tablicaLiczb[], int rozmiarTablicy)
{
    int indexTablicy;

    indexTablicy = 0;
    while (indexTablicy < rozmiarTablicy)
    {
        printf("%d ", tablicaLiczb[indexTablicy]);
        indexTablicy++;
    }
    printf("\n");
}

void wyswietlDoWhileOdPoczatku(int tablicaLiczb[], int rozmiarTablicy)
{
    int indexTablicy;

    if (rozmiarTablicy <= 0)
    {
        return;
    }

    indexTablicy = 0;
    do
    {
        printf("%d ", tablicaLiczb[indexTablicy]);
        indexTablicy++;
    } while (indexTablicy < rozmiarTablicy);
    printf("\n");
}

void wyswietlForOdKonca(int tablicaLiczb[], int rozmiarTablicy)
{
    int indexTablicy;

    for (indexTablicy = rozmiarTablicy - 1; indexTablicy >= 0; indexTablicy--)
    {
        printf("%d ", tablicaLiczb[indexTablicy]);
    }
    printf("\n");
}

void wyswietlWhileOdKonca(int tablicaLiczb[], int rozmiarTablicy)
{
    int indexTablicy;

    indexTablicy = rozmiarTablicy - 1;
    while (indexTablicy >= 0)
    {
        printf("%d ", tablicaLiczb[indexTablicy]);
        indexTablicy--;
    }
    printf("\n");
}

void wyswietlDoWhileOdKonca(int tablicaLiczb[], int rozmiarTablicy)
{
    int indexTablicy;

    if (rozmiarTablicy <= 0)
    {
        return;
    }

    indexTablicy = rozmiarTablicy - 1;
    do
    {
        printf("%d ", tablicaLiczb[indexTablicy]);
        indexTablicy--;
    } while (indexTablicy >= 0);
    printf("\n");
}

int main(void)
{
    int mojaTablica[5];
    int rozmiarTablicy;

    mojaTablica[0] = 10;
    mojaTablica[1] = 20;
    mojaTablica[2] = 30;
    mojaTablica[3] = 40;
    mojaTablica[4] = 50;

    rozmiarTablicy = 5;

    printf("--- OD POCZATKU DO KONCA ---\n");
    printf("Petla for:      ");
    wyswietlForOdPoczatku(mojaTablica, rozmiarTablicy);

    printf("Petla while:    ");
    wyswietlWhileOdPoczatku(mojaTablica, rozmiarTablicy);

    printf("Petla do-while: ");
    wyswietlDoWhileOdPoczatku(mojaTablica, rozmiarTablicy);

    printf("\n--- OD KONCA DO POCZATKU ---\n");
    printf("Petla for:      ");
    wyswietlForOdKonca(mojaTablica, rozmiarTablicy);

    printf("Petla while:    ");
    wyswietlWhileOdKonca(mojaTablica, rozmiarTablicy);

    printf("Petla do-while: ");
    wyswietlDoWhileOdKonca(mojaTablica, rozmiarTablicy);

    return 0;
}
