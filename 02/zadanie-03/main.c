#include <stdio.h>

int main(void)
{
    int liczbaP = 0, liczbaD = 0, wynik = 0;
    char znak;

    printf("Podaj dwie liczby: \n");

    if (
    scanf("%d", &liczbaP) != 1 || scanf("%d", &liczbaD) != 1
        )
    {
        printf("Bledne dane wejsciowe.\n");
        return 1;
    }

    printf("Wybierz rodzaj operacji (+, -, *, /, %%): \n");
     scanf(" %c", &znak);

    switch (znak)
    {
        case '+':
            wynik = liczbaP + liczbaD;
            break;
        case '-':
            wynik = liczbaP - liczbaD;
            break;
        case '*':
            wynik = liczbaP * liczbaD;
            break;
        case '/':
            if (liczbaD != 0) {
                wynik = liczbaP / liczbaD;
            } else {
                printf("Blad: Dzielenie przez zero!\n");
                return 1;
            }
            break;
        case '%':
            if (liczbaD != 0) {
                wynik = liczbaP % liczbaD;
            } else {
                printf("Blad: Dzielenie przez zero!\n");
                return 1;
            }
            break;
        default:
            printf("Blad: Nieznana operacja '%c'\n", znak);
            return 1;
    }

    printf("Wynikiem twojej operacji jest: %d\n", wynik);

    return 0;
}
