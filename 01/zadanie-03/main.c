#include <stdio.h>

int main() {
    char ini;
    int wiek;

    printf("Podaj pierwsza litere swojego imienia: ");
    scanf(" %c", &ini);

    printf("Podaj swoj wiek: ");
    scanf("%d", &wiek);

    printf("Inicjał: %c, wiek: %d\n", ini , wiek);

    return 0;
}
