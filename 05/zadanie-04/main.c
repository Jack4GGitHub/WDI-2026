#include <stdio.h>
#include <ctype.h>

int main(void) {
    char slowo[21];
    int licznik_samoglosek;
    int i;
    char znak;

    licznik_samoglosek = 0;

    printf("Podaj jedno slowo (maksymalnie 20 znakow): ");
    scanf("%20s", slowo);

    for (i = 0; slowo[i] != '\0'; i++) {
        znak = (char)tolower((unsigned char)slowo[i]);

        if (znak == 'a' || znak == 'e' || znak == 'i' ||
            znak == 'o' || znak == 'u' || znak == 'y') {
            licznik_samoglosek++;
        }
    }

    printf("Liczba samoglosek w slowie \"%s\": %d\n", slowo, licznik_samoglosek);

    return 0;
}
