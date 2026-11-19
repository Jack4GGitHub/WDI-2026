#include <stdio.h>

int main(void) {
    int liczba1;
    int liczba2;
    int pomocnicza;
    int odwrocona;
    int ostatnia_cyfra;

    odwrocona = 0;

    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &liczba1);

    printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &liczba2);

    if (liczba1 < 0 || liczba2 < 0) {
        printf("Liczba nie moze byc < 0.\n");
        return 0;
    }

    pomocnicza = liczba1;

    while (pomocnicza > 0) {
        ostatnia_cyfra = pomocnicza % 10;
        odwrocona = odwrocona * 10 + ostatnia_cyfra;
        pomocnicza = pomocnicza / 10;
    }

    if (odwrocona == liczba2) {
        printf("Wynik: Liczby %d oraz %d SA lustrzane!\n", liczba1, liczba2);
    } else {
        printf("Wynik: Liczby %d oraz %d NIE SA lustrzane.\n", liczba1, liczba2);
    }

    return 0;
}
