#include <stdio.h>

int sumaCyfr(int liczba)
{
    if (liczba == 0)
    {
        return 0;
    }

    return (liczba % 10) + sumaCyfr(liczba / 10);
}

int main(void)
{
    int testowanaLiczba;
    printf("Podaj liczbe do zsumowania jej cyfr: ");
    scanf("%d", &testowanaLiczba);
    printf("Suma cyfr liczby %d wynosi: %d\n", testowanaLiczba, sumaCyfr(testowanaLiczba));

    return 0;
}
