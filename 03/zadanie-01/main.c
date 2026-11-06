#include <stdio.h>

long suma_fibonacciego(int n) {
    long a = 0;
    long b = 1;
    long temp;
    int target;
    int i;

    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 0;
    }

    target = n + 2;

    for (i = 2; i <= target; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b - 1;
}

int main()
{
  int n;

  printf("Podaj dla ilu liczb ciagu fibonacciego chcesz sume: ");
  scanf("%d", &n);

  printf("Suma %d wyrazow ciagu wynosi: %ld", n, suma_fibonacciego(n));

  
  


  return 0;
}
