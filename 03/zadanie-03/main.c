#include <stdio.h>

double floor(double x) {
    long poK = (long)x;

    if (x < 0.0 && x != (double)poK)
    {
        return (double)(poK - 1);
    }
    
    return (double)poK;
}

double ceiling(double x)
{
    long poK = (long)x;

    if (x > 0.0 && x != (double)poK)
    {
        return (double)(poK + 1);
    }

    return (double)poK;
}

double round(double x) {
    if (x >= 0.0) {
        return floor(x + 0.5);
    } else {
        return ceiling(x - 0.5);
    }
}

int main(void) {
    double testy[6];
    int i;
    int liczba_testow;

    testy[0] = 3.7;
    testy[1] = 3.2;
    testy[2] = 3.0;
    testy[3] = -3.2;
    testy[4] = -3.7;
    testy[5] = -3.0;

    liczba_testow = 6;

    printf("  x   | floor(x) | ceiling(x) | round(x)\n");
    
    for (i = 0; i < liczba_testow; ++i) {
        double liczba = testy[i];
        printf("%5.1f | %8.1f | %10.1f | %8.1f\n", 
               liczba, 
               floor(liczba), 
               ceiling(liczba), 
               round(liczba));
    }

    return 0;
}
