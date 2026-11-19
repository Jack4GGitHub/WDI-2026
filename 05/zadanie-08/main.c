#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int tablica[3][3][3][3][3];
    int zbior;
    int zestaw;
    int kostka;
    int warstwa;
    int wiersz;
    int wybor;
    int nowa_wartosc;
    char bufor[64];

    srand((unsigned int)time(NULL));

    for (zbior = 0; zbior < 3; zbior++) {
        for (zestaw = 0; zestaw < 3; zestaw++) {
            for (kostka = 0; kostka < 3; kostka++) {
                for (warstwa = 0; warstwa < 3; warstwa++) {
                    for (wiersz = 0; wiersz < 3; wiersz++) {
                        tablica[zbior][zestaw][kostka][warstwa][wiersz] = rand() % 10;
                    }
                }
            }
        }
    }

    wybor = 0;

    while (wybor != 3) {
        printf("\n=== MENU TABLICY 5D (3x3x3x3x3) ===\n");
        printf("1. Wyswietl zawartosc wybranej WARSTWY\n");
        printf("2. Edytuj wartosc na poziomie wybranej WARSTWY\n");
        printf("3. Wyjscie\n");
        printf("Wybierz opcje (1-3): ");

        if (fgets(bufor, 64, stdin) == NULL) {
            break;
        }
        if (sscanf(bufor, "%d", &wybor) != 1) {
            wybor = 0;
            printf("Blad: Wpisz pojedyncza cyfre (1, 2 lub 3).\n");
            continue;
        }

        if (wybor == 1) {
            printf("Podaj numer ZBIORU (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &zbior) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            printf("Podaj numer ZESTAWU (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &zestaw) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            printf("Podaj numer KOSTKI (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &kostka) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            printf("Podaj numer WARSTWY (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &warstwa) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            if (zbior >= 1 && zbior <= 3 &&
                zestaw >= 1 && zestaw <= 3 &&
                kostka >= 1 && kostka <= 3 &&
                warstwa >= 1 && warstwa <= 3) {

                printf("\nZawartosc [Zbior %d -> Zestaw %d -> Kostka %d -> Warstwa %d]:\n",
                       zbior, zestaw, kostka, warstwa);

                for (wiersz = 0; wiersz < 3; wiersz++) {
                    printf("| Wiersz %d: %d |\n",
                           wiersz + 1,
                           tablica[zbior - 1][zestaw - 1][kostka - 1][warstwa - 1][wiersz]);
                }
            } else {
                printf("Blad: Wszystkie wspolrzedne musza byc z zakresu od 1 do 3!\n");
            }

        } else if (wybor == 2) {
            printf("Podaj numer ZBIORU (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &zbior) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            printf("Podaj numer ZESTAWU (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &zestaw) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            printf("Podaj numer KOSTKI (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &kostka) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            printf("Podaj numer WARSTWY (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &warstwa) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            printf("Podaj numer WIERSZA do edycji (1-3): ");
            if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &wiersz) != 1) {
                printf("Blad: Niepoprawna liczba!\n");
                continue;
            }

            if (zbior >= 1 && zbior <= 3 &&
                zestaw >= 1 && zestaw <= 3 &&
                kostka >= 1 && kostka <= 3 &&
                warstwa >= 1 && warstwa <= 3 &&
                wiersz >= 1 && wiersz <= 3) {

                printf("Obecna wartosc w tym miejscu: %d\n",
                       tablica[zbior - 1][zestaw - 1][kostka - 1][warstwa - 1][wiersz - 1]);
                printf("Podaj nowa wartosc calkowita: ");

                if (fgets(bufor, 64, stdin) == NULL || sscanf(bufor, "%d", &nowa_wartosc) != 1) {
                    printf("Blad: Niepoprawna liczba!\n");
                    continue;
                }

                tablica[zbior - 1][zestaw - 1][kostka - 1][warstwa - 1][wiersz - 1] = nowa_wartosc;
                printf("Zaktualizowano wartosc pomyslnie!\n");
            } else {
                printf("Blad: Wszystkie wspolrzedne musza byc z zakresu od 1 do 3!\n");
            }

        } else if (wybor != 3) {
            printf("Nieprawidlowy wybor. Wybierz 1, 2 lub 3.\n");
        }
    }

    printf("Zakonczono dzialanie programu.\n");

    return 0;
}
