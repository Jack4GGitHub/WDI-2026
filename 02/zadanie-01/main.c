#include <stdio.h>


int main()
{
  int liczba;
  int sum;
  int min;
  int max;
  int ilosc;

  ilosc = 0;
  sum = 0;

  scanf("%d", &liczba);

  min = liczba;
  max = liczba;

  while(liczba % 2 != 0)
  {
    sum += liczba; ilosc++;

    if(liczba < min)
    {
      min = liczba;
    }

    if(liczba > max)
    {
      max = liczba;
    }

    scanf("%d", &liczba);
  }

  sum += liczba;
  ilosc++;
  if(liczba < min)
  {
    min = liczba;
  }

  if(liczba > max)
  {
    max = liczba;
  }

  printf("Najwieksza: %d\n", max);
  printf("Najmniejsza: %d\n", min);
  printf("Suma: %d\n", sum);
  printf("Srednia: %f\n", (float)sum / ilosc);

  return 0;
}
