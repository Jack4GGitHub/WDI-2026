#include <stdio.h>

int main() {
    int liczba;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    if (liczba > 0 && liczba % 2 == 0) {
        printf("Liczba jest jednoczesnie dodatnia i parzysta.\n");
    } else {
        printf("Liczba nie spelnia obu warunkow jednoczesnie.\n");
    }

    return 0;
}
