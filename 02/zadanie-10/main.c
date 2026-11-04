#include <stdio.h>


int potega(int liczba, int wykladnik)
{
  int wynik;
  int i;
  wynik = liczba;
  for(i = 1 ; i < wykladnik; i++){
    wynik *= liczba;
  }
  return wynik;
}

int main()
{
  int liczba , wykladnik;

  printf("Podaj Liczbe oraz jej wykladnik: \n");
  scanf("%d",&liczba);
  scanf("%d",&wykladnik);

  printf("potega o takim wykladniku wynosi: %d",potega(liczba, wykladnik));
  

  return 0;
}
