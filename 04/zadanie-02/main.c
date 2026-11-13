#include <stdio.h>
#include <ctype.h>

char na_wielka(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A'); /* różnica 32 daj nam wielką litere */
    }
    return c;
}


char na_mala(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); 
    }
    return c;
}


int main() {
    char imie[50];
    int i, k;

     printf("Podaj swoje imie: ");
    scanf("%49s", imie);

    if (imie[0] != '\0') {
        imie[0] = (char)toupper((unsigned char)imie[0]);

        for (i = 1; imie[i] != '\0'; i++) {
            imie[i] = (char)tolower((unsigned char)imie[i]);
        }
    }
    printf("Sformatowane imie: %s\n", imie);

    printf("Podaj swoje imie: ");
    scanf("%49s", imie);

    imie[0] = na_wielka(imie[0]);
    
    for ( k=1; k < 50;k++ ) {
        imie[k] = na_mala( imie[k]);
    }


    printf("Sformatowane imie: %s\n", imie);

    return 0;
}
