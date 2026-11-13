#include <stdio.h>

int main(void) {
    char tekst[200];
    int liczniki[26];
    int i;
    char znak;

    for (i = 0; i < 26; i++) {
        liczniki[i] = 0;
    }

    printf("Podaj dowolny tekst: ");
    fgets(tekst, 200, stdin);

    for (i = 0; tekst[i] != '\0'; i++) {
        znak = tekst[i];

        if (znak >= 'A' && znak <= 'Z') {
            znak = znak + 32;
        }

        if (znak >= 'a' && znak <= 'z') {
            liczniki[znak - 'a']++;
        }
    }

    printf("\nLiczba wystapien poszczegolnych liter:\n");
    for (i = 0; i < 26; i++) {
        if (liczniki[i] > 0) {
            printf("Litera '%c': %d\n", 'a' + i, liczniki[i]);
        }
    }

    return 0;
}
