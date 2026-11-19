#include <stdio.h>

int main(void) {
    int liczba;
    int pomocnicza;
    int suma;
    int iloczyn;
    int cyfra;
    int warunek1;
    int warunek2;

    suma = 0;
    iloczyn = 1;

    printf("Podaj liczbe calkowita nieujemna: ");
    scanf("%d", &liczba);

    if (liczba < 0) {
        printf("Blad: Podaj liczbe >= 0.\n");
        return 0;
    }

    pomocnicza = liczba;

    do {
        cyfra = pomocnicza % 10;
        suma = suma + cyfra;
        iloczyn = iloczyn * cyfra;
        pomocnicza = pomocnicza / 10;
    } while (pomocnicza > 0);

    warunek1 = (suma == liczba);
    warunek2 = (iloczyn == liczba);

    printf("\nSuma cyfr: %d\n", suma);
    printf("Iloczyn cyfr: %d\n", iloczyn);

    if (warunek1 && warunek2) {
        printf("Liczba %d spelnia OBA warunki (Warunek I oraz Warunek II).\n", liczba);
    } else if (warunek1) {
        printf("Liczba %d spelnia TYLKO Warunek I (suma cyfr jest rowna liczbie).\n", liczba);
    } else if (warunek2) {
        printf("Liczba %d spelnia TYLKO Warunek II (iloczyn cyfr jest rowny liczbie).\n", liczba);
    } else {
        printf("Liczba %d NIE spelnia zadnego z warunkow.\n", liczba);
    }

    return 0;
}
