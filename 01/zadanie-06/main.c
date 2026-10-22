#include <stdio.h>

int main() {
    unsigned sekundy;
    unsigned godziny, minuty, reszta_sekund;
    
    printf("Podaj liczbe sekund: ");
    scanf("%u", &sekundy);
    godziny = sekundy / 3600;
 minuty = (sekundy % 3600) / 60;
    reszta_sekund = sekundy % 60;

      printf("To bedzie: %u h %u min %u s\n", godziny, minuty, reszta_sekund);

    return 0;
}
