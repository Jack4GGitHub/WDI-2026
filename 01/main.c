#include <stdio.h>

int main() {
    int a, b;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Blad: Nie mozna dzielic przez zero!\n");
    } else if (a % b == 0) {
        printf("Liczba %d jest podzielna przez %d.\n", a, b);
    } else {
        printf("Liczba %d nie jest podzielna przez %d.\n", a, b);
    }

    return 0;
}
