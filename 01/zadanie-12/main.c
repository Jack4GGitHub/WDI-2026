#include <stdio.h>

int main() {
    int liczba , suma = 0;
    printf("Podaj liczbe");
    scanf("%d", &liczba);

    
    do {
        suma = suma + liczba;
        liczba = liczba - 1;
    }while( liczba >= 0);

    printf("Suma tego wynosi: %d", suma);
    
    return 0;
}
