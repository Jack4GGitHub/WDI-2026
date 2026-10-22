#include <stdio.h>

int main() {
    double a, b, wynik;
    char znak;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &a);
    printf("Podaj druga liczbe: ");
    scanf("%lf", &b);
    
    printf("Podaj znak dzialania (+, -, *, /, %%): ");
    scanf(" %c", &znak);

    switch (znak) {
        case '+':
            wynik = a + b;
            printf("Wynik: %.2lf\n", wynik);
            break;
        case '-':
            wynik = a - b;
            printf("Wynik: %.2lf\n", wynik);
            break;
        case '*':
            wynik = a * b;
            printf("Wynik: %.2lf\n", wynik);
            break;
        case '/':
            if (b != 0) {
                wynik = a / b;
                printf("Wynik: %.2lf\n", wynik);
            } else {
                printf("Blad: Nie mozna dzielic przez zero!\n");
            }
            break;
        case '%':
            if ((long long)b != 0) {
                long long reszta = (long long)a % (long long)b;
                printf("Wynik: %lld\n", reszta);
            } else {
                printf("Blad: Nie mozna dzielic przez zero!\n");
            }
            break;
        default:
            printf("Blad: Podano zly znak!\n");
    }

    return 0;
}
