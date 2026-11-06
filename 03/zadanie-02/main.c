#include <stdio.h>


long f(int n) {
    
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    if (n == 3) {
        return 3;
    }

    return f(n - 1) * f(n - 2) - f(n - 3);
}


int main ()
{
  int N;

  printf("Podaj liczbe n dla f(n): ");
  scanf("%d",&N);

  printf("Wrtosc n-tego wyrazu wynosi: %ld \n", f(N));
  
  return 0;
}
