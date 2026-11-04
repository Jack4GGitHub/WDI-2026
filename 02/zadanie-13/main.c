#include <stdio.h>

unsigned long fibonacci_zolnierzy(int numer_fali) {
    unsigned long stary_rekrut;
    unsigned long mlody_rekrut;
    unsigned long armia_przyszlosci;
    int i;

    if (numer_fali <= 0) {
        return 0;
    }
    if (numer_fali == 1) {
        return 1;
    }

    stary_rekrut = 0;
    mlody_rekrut = 1;
    armia_przyszlosci = 0;

    for (i = 2; i <= numer_fali; ++i) {
        armia_przyszlosci = stary_rekrut + mlody_rekrut;
        stary_rekrut = mlody_rekrut;
        mlody_rekrut = armia_przyszlosci;
    }

    return armia_przyszlosci;
}

int main(void) {
    int fala_atakujaca;
    unsigned long sila_batalionu;

    printf("Podaj numer fali zolnierzy do zwerbowania: ");
    if (scanf("%d", &fala_atakujaca) == 1) {
        if (fala_atakujaca < 0) {
            printf("Zolnierze nie umieja cofac sie w czasie!\n");
        } else {
            sila_batalionu = fibonacci_zolnierzy(fala_atakujaca);
            printf("W fali nr %d masz dokladnie %lu zolnierzy maszerujacych na front!\n", fala_atakujaca, sila_batalionu);
        }
    } else {
        printf("Aua, to nie jest poprawny numer fali!\n");
    }

    return 0;
}
