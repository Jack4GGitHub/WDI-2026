#include <stdio.h>
#define RozmiarT 10

int PodzielTablice(int tab[], int l, int r) {
    int przedzial = tab[(l + r) / 2];
    int i = l - 1;
    int j = r + 1;
    int temp;

    while (1) {
        do {
            i++;
        } while (tab[i] < przedzial);

        do {
            j--;
        } while (tab[j] > przedzial);

        if (i >= j) {
            return j + 1;
        }

        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
    }
}

void quick_sort(int tab[], int l, int r) {
    int i;

    while (l < r) {
        i = PodzielTablice(tab, l, r);

        if ((i - l) <= (r - i)) {
            quick_sort(tab, l, i - 1);
            l = i + 1;
        } else {
            quick_sort(tab, i, r);
            r = i - 1;
        }
    }
}

int main() {
    int T[RozmiarT];
    int i;

    printf("Podaj dziesiec elementow do wpisania w tablice:\n");

    for (i = 0; i < RozmiarT; i++) {
        scanf("%d", &T[i]);
    }

    quick_sort(T, 0, RozmiarT - 1);

    printf("Po posortowaniu ta tablica bedzie wygladac nastepujaco:\n");

    for (i = 0; i < RozmiarT; i++) {
        printf(" %d", T[i]);
    }

    return 0;
}
