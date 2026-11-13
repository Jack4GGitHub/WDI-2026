#include <stdio.h>

int main(void) {
    char tekst[256];
    int wybor;
    int klucz;
    int przesuniecie;
    int i;
    int znak_czyszczacy;

    wybor = 0;

    while (wybor != 3) {
        printf("\n=== MENU SZYFRU CEZARA ===\n");
        printf("1. Zaszyfruj tekst\n");
        printf("2. Odszyfruj tekst\n");
        printf("3. Wyjscie\n");
        printf("Wybierz opcje (1-3): ");
        scanf("%d", &wybor);

        while ((znak_czyszczacy = getchar()) != '\n' && znak_czyszczacy != EOF) {
        }

        if (wybor == 1 || wybor == 2) {
            printf("Podaj tekst: ");
            fgets(tekst, 256, stdin);

            printf("Podaj klucz szyfrujacy (np. 3 dla klasycznego szyfru Cezara): ");
            scanf("%d", &klucz);

            while ((znak_czyszczacy = getchar()) != '\n' && znak_czyszczacy != EOF) {
            }

            przesuniecie = ((klucz % 26) + 26) % 26;

            if (wybor == 2) {
                przesuniecie = (26 - przesuniecie) % 26;
            }

            for (i = 0; tekst[i] != '\0'; i++) {
                if (tekst[i] >= 'a' && tekst[i] <= 'z') {
                    tekst[i] = 'a' + (tekst[i] - 'a' + przesuniecie) % 26;
                } else if (tekst[i] >= 'A' && tekst[i] <= 'Z') {
                    tekst[i] = 'A' + (tekst[i] - 'A' + przesuniecie) % 26;
                }
            }

            if (wybor == 1) {
                printf("Zaszyfrowany tekst: %s", tekst);
            } else {
                printf("Odszyfrowany tekst: %s", tekst);
            }
        } else if (wybor != 3) {
            printf("Nieprawidlowy wybor. Wpisz 1, 2 lub 3.\n");
        }
    }

    printf("Zakonczono.\n");

    return 0;
}
