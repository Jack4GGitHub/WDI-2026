#include <stdio.h>

int main() {
    unsigned sekundy;
    
    printf("Podaj liczbe sekund: ");
    scanf("%u", &sekundy);
    printf("To bedzie: %u h %u min %u s\n", 
           sekundy / 3600, 
           (sekundy % 3600) / 60, 
           sekundy % 60);

    return 0;
}
