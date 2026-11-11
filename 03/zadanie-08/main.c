#include <stdio.h>


int main(void) {
    
    int stos[5];
    int wierzcholek = -1;

    int kolejka[5];
    int poczatek = 0;
    int koniec = 0;
    int ile_elementow = 0;

    int pobrana_wartosc;
    int i;
    int idx;

    printf("=== LIFO ===\n");

    wierzcholek++;
    stos[wierzcholek] = 10;

    wierzcholek++;
    stos[wierzcholek] = 20;

    wierzcholek++;
    stos[wierzcholek] = 30;

    printf("Dodano do stosu: 10, 20, 30\n");

    if (wierzcholek >= 0) {
        pobrana_wartosc = stos[wierzcholek];
        wierzcholek--;
        printf("Pobrano ze stosu: %d\n", pobrana_wartosc);
    }

    printf("Zawartosc stosu: ");
    for (i = wierzcholek; i >= 0; i--) {
        printf("%d ", stos[i]);
    }
    printf("\n\n");

    printf("=== FIFO ===\n");

    kolejka[koniec] = 100;
    koniec = (koniec + 1) % 5;
    ile_elementow++;

    kolejka[koniec] = 200;
    koniec = (koniec + 1) % 5;
    ile_elementow++;

    kolejka[koniec] = 300;
    koniec = (koniec + 1) % 5;
    ile_elementow++;

    printf("Dodano do kolejki: 100, 200, 300\n");

    if (ile_elementow > 0) {
        pobrana_wartosc = kolejka[poczatek];
        poczatek = (poczatek + 1) % 5;
        ile_elementow--;
        printf("Pobrano z kolejki: %d\n", pobrana_wartosc);
    }

    printf("Zawartosc kolejki: ");
    for (i = 0; i < ile_elementow; i++) {
        idx = (poczatek + i) % 5;
        printf("%d ", kolejka[idx]);
    }
    printf("\n");

    return 0;
}
