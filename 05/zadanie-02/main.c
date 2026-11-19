#include <stdio.h>

int main(void) {
    int liczba;
    char napis[20];
    int i;
    int czy_ujemna;
    int poczatek;
    int koniec;
    char temp;

    i = 0;
    czy_ujemna = 0;

    printf("Podaj liczbe calkowita (typ int): ");
    scanf("%d", &liczba);

    if (liczba == 0) {
        napis[i] = '0';
        i++;
    } else {
        if (liczba < 0) {
            czy_ujemna = 1;
            liczba = -liczba;
        }

        while (liczba > 0) {
            napis[i] = (liczba % 10) + '0';
            i++;
            liczba = liczba / 10;
        }

        if (czy_ujemna == 1) {
            napis[i] = '-';
            i++;
        }
    }

    napis[i] = '\0';

    poczatek = 0;
    koniec = i - 1;

    while (poczatek < koniec) {
        temp = napis[poczatek];
        napis[poczatek] = napis[koniec];
        napis[koniec] = temp;
        poczatek++;
        koniec--;
    }

    printf("Wynik jako lancuch: \"%s\"\n", napis);
    printf("Pierwszy znak: '%c'\n", napis[0]);

    return 0;
}
