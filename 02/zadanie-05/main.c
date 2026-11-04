#include <stdio.h>

int main(void)
{
    int ranga = 0;

    printf("Podaj range (1-Poddany, 2-Giermek, 3-Rycerz, 4-Mag, 5-Krolowa): ");

    if (scanf("%d", &ranga) != 1) {
        printf("Bledny format danych.\n");
        return 1;
    }

    if (ranga >= 1 && ranga <= 5) {
        printf("\nUprawnienia:\n");
    }

    switch (ranga)
    {
        case 5:
            printf("- Moze rozkazywac Krolowi\n");
        case 4:
            printf("- Moze rozmawiac z Krolem\n");
        case 3:
            printf("- Moze wchodzic do zamku codziennie oraz rekrutowac giermkow\n");
        case 2:
            printf("- Moze wchodzic na dziedziniec zamkowy codziennie\n");
        case 1:
            printf("- Moze czcic Krola\n");
            break;
        default:
            printf("Niepoprawna ranga!\n");
            break;
    }

    return 0;
}
