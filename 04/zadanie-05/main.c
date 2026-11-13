#include <stdio.h>

int main(void) {
    char tekst[50];
    int i;
    int czy_liczba;
    int znak_liczby;
    int start;
    int wynik;

    czy_liczba = 1;
    znak_liczby = 1;
    start = 0;
    wynik = 0;

    printf("Podaj ciag znakow: ");
    scanf("%49s", tekst);

    if (tekst[0] == '-') {
        znak_liczby = -1;
        start = 1;
    } else if (tekst[0] == '+') {
        start = 1;
    }

    if (tekst[start] == '\0') {
        czy_liczba = 0;
    }

    for (i = start; tekst[i] != '\0'; i++) {
        if (tekst[i] < '0' || tekst[i] > '9') {
            czy_liczba = 0;
            break;
        }
    }

    if (czy_liczba == 1) {
        for (i = start; tekst[i] != '\0'; i++) {
            wynik = wynik * 10 + (tekst[i] - '0');
        }
        wynik = wynik * znak_liczby;

        printf("Sukces! Uzyskano liczbe int: %d\n", wynik);
        printf("Dowod (liczba * 2): %d\n", wynik * 2);
    } else {
        printf("Blad: Podany ciag znakow NIE jest liczba calkowita.\n");
    }

    return 0;
}
