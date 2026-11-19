#include <stdio.h>

int wczytaj_wymiar(char nazwa[]) {
    int wymiar;
    char bufor[64];

    wymiar = 0;

    while (wymiar < 1 || wymiar > 6) {
        printf("Podaj liczbe %s (od 1 do 6): ", nazwa);

        if (fgets(bufor, 64, stdin) == NULL) {
            return 1;
        }
        if (sscanf(bufor, "%d", &wymiar) != 1 || wymiar < 1 || wymiar > 6) {
            printf("Blad: Wpisz liczbe calkowita z zakresu 1-6!\n");
            wymiar = 0;
        }
    }

    return wymiar;
}

void wczytaj_macierz(int macierz[6][6], int wiersze, int kolumny) {
    int i;
    int j;
    int poprawna;
    char bufor[64];

    printf("\nPodaj wartosci elementow macierzy (%dx%d):\n", wiersze, kolumny);

    for (i = 0; i < wiersze; i++) {
        for (j = 0; j < kolumny; j++) {
            poprawna = 0;

            while (poprawna == 0) {
                printf("Element [%d][%d]: ", i + 1, j + 1);

                if (fgets(bufor, 64, stdin) == NULL) {
                    macierz[i][j] = 0;
                    poprawna = 1;
                } else if (sscanf(bufor, "%d", &macierz[i][j]) == 1) {
                    poprawna = 1;
                } else {
                    printf("Blad: To nie jest poprawna liczba calkowita! Sprobuj ponownie.\n");
                }
            }
        }
    }
}

void wyswietl_macierz(int macierz[6][6], int wiersze, int kolumny) {
    int i;
    int j;

    printf("\nTwoja macierz (%dx%d):\n", wiersze, kolumny);

    for (i = 0; i < wiersze; i++) {
        printf("|");
        for (j = 0; j < kolumny; j++) {
            printf("%5d ", macierz[i][j]);
        }
        printf("|\n");
    }
}

int main(void) {
    int macierz[6][6];
    int wiersze;
    int kolumny;

    wiersze = wczytaj_wymiar("wierszy");
    kolumny = wczytaj_wymiar("kolumn");

    wczytaj_macierz(macierz, wiersze, kolumny);
    wyswietl_macierz(macierz, wiersze, kolumny);

    return 0;
}
