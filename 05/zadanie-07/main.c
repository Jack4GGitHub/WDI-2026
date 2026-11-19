#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int kostka[10][10][10];
    int warstwa;
    int wiersz;
    int kolumna;

    srand((unsigned int)time(NULL));

    for (warstwa = 0; warstwa < 10; warstwa++) {
        for (wiersz = 0; wiersz < 10; wiersz++) {
            for (kolumna = 0; kolumna < 10; kolumna++) {
                kostka[warstwa][wiersz][kolumna] = rand() % 10;
            }
        }
    }

    for (warstwa = 0; warstwa < 10; warstwa++) {
        printf("Warstwa %d:\n", warstwa + 1);

        for (wiersz = 0; wiersz < 10; wiersz++) {
            printf("|");
            for (kolumna = 0; kolumna < 10; kolumna++) {
                printf(" %d |", kostka[warstwa][wiersz][kolumna]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
