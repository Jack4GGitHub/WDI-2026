#include <stdio.h>

void bubbleSort(int tablicaLiczb[], int rozmiarTablicy)
{
    int i;
    int j;
    int tymczasowa;

    for (i = 0; i < rozmiarTablicy - 1; i++)
    {
        for (j = 0; j < rozmiarTablicy - 1 - i; j++)
        {
            if (tablicaLiczb[j] > tablicaLiczb[j + 1])
            {
                tymczasowa = tablicaLiczb[j];
                tablicaLiczb[j] = tablicaLiczb[j + 1];
                tablicaLiczb[j + 1] = tymczasowa;
            }
        }
    }
}

int main(void)
{
    int mojeLiczby[10];
    int rozmiarTablicy;
    int iTablicy;

    rozmiarTablicy = 10;

    printf("Wprowadz 10 liczb calkowitych:\n");
    for (iTablicy = 0; iTablicy < rozmiarTablicy; iTablicy++)
    {
        printf("Liczba %d: ", iTablicy + 1);
        scanf("%d", &mojeLiczby[iTablicy]);
    }

    bubbleSort(mojeLiczby, rozmiarTablicy);

    printf("\nPosortowana tablica:\n");
    for (iTablicy = 0; iTablicy < rozmiarTablicy; iTablicy++)
    {
        printf("%d ", mojeLiczby[iTablicy]);
    }

    return 0;
}
