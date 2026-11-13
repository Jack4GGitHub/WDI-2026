#include <stdio.h>

int main(void) {
    char wyrazPierwszy[50];
    char wyrazDrugi[50];
    int liczniki[26];
    int i;
    int czyAnagram;
    char znak;

    czyAnagram = 1;

    for (i = 0; i < 26; i++) {
        liczniki[i] = 0;
    }

    printf("Podaj pierwszy wyraz: ");
    scanf("%49s", wyrazPierwszy);

    printf("Podaj drugi wyraz: ");
    scanf("%49s", wyrazDrugi);

    for (i = 0; wyrazPierwszy[i] != '\0'; i++) {
        znak = wyrazPierwszy[i];
        if (znak >= 'A' && znak <= 'Z') {
            znak = znak + 32;
        }
        if (znak >= 'a' && znak <= 'z') {
            liczniki[znak - 'a']++;
        }
    }

    for (i = 0; wyrazDrugi[i] != '\0'; i++) {
        znak = wyrazDrugi[i];
        if (znak >= 'A' && znak <= 'Z') {
            znak = znak + 32;
        }
        if (znak >= 'a' && znak <= 'z') {
            liczniki[znak - 'a']--;
        }
    }

    for (i = 0; i < 26; i++) {
        if (liczniki[i] != 0) {
            czyAnagram = 0;
            break;
        }
    }

    if (czyAnagram) {
        printf("Podane wyrazy SA swoimi anagramami!\n");
    } else {
        printf("Podane wyrazy NIE SA swoimi anagramami.\n");
    }

    return 0;
}
