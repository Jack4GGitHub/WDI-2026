#include <stdio.h>

int main(void) {
    int tablica[4][4];
    int wiersz;
    int kolumna;

    printf("Podaj 16 liczb calkowitych do tablicy 4x4:\n");

    for (wiersz = 0; wiersz < 4; wiersz++) {
        for (kolumna = 0; kolumna < 4; kolumna++) {
            printf("Element [wiersz %d][kolumna %d]: ", wiersz + 1, kolumna + 1);
            scanf("%d", &tablica[wiersz][kolumna]);
        }
    }

    printf("\nWczytana tablica 4x4:\n");

    for (wiersz = 0; wiersz < 4; wiersz++) {
        for (kolumna = 0; kolumna < 4; kolumna++) {
            printf("%5d", tablica[wiersz][kolumna]);
        }
        printf("\n");
    }

    return 0;
}
