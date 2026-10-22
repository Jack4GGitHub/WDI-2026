#include <stdio.h>

int main() {
    float liczba;

    printf("Wprowadz liczbe zmiennoprzecinkową: ");
    scanf("%f", &liczba);

    printf("Dokładność do 1 miejsca: %.1f\n", liczba);
    printf("Dokładność do 3 miejsca: %.3f\n", liczba);
    printf("Dokładność do 5 miejsca: %.5f\n", liczba);

    return 0;
}
