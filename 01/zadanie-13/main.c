#include <stdio.h>

int main()
{
  int i = 0, LiczbaN = 0, liczba = 0;
    float srednia = 0, suma =0;

  scanf("%d",&LiczbaN);

  for( i = 0; i < LiczbaN; i++)
  {
    scanf("%d", &liczba); suma += liczba;
  }

  srednia = suma / LiczbaN; 
  printf("Suma podanych %d liczb wynosi %f a ich srednia %f", LiczbaN, suma,srednia);
  

  return 0;
}
