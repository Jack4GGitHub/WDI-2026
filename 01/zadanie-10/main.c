#include <stdio.h>

int main() {
    float ocena;
    float suma = 0.0;
    float srednia;
    int niedostateczne = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Podaj ocene nr %d: ", i);
        scanf("%f", &ocena);
        
        suma += ocena;

        if (ocena == 1.0f) {
            niedostateczne++;
        }
    }

    srednia = suma / 5.0;

    printf("\nSrednia dla 5 ocen wynosi: %.2f\n", srednia);
    printf("Liczba ocen niedostatecznych: %d\n", niedostateczne);

    return 0;
}
