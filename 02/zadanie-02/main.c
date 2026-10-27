#include <stdio.h>


int main()
{
  int liczba;
  int suma;
  int i;

  suma = 0;

  scanf("%d", &liczba);
  
  for( i = 1; i < liczba + 1; i++)
  {
    suma += i*i;
  }

  printf(" suma wynosi: %d", suma);


  return 0;
}
