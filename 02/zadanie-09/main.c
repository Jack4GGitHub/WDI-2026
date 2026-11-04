#include <stdio.h>


int sil(int a)
{
  int i;
  int wynik;

  wynik = 1;

  for(i = 1; i <= a; i++)
  {
    wynik *= i;
  }

  return wynik;
}

int main()
{
  int n;
  printf("Podaj liczbe (n)!: ");
  scanf("%d", &n);
  printf("%d \n", sil(n));


  return 0;
}
