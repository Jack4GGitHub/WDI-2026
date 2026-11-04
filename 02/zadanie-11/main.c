#include <stdio.h>


int potega( int liczba, int wykladnik)
{
  if(wykladnik == 0)
  {
    return 1;
  }
  else {
    return liczba * potega(liczba, wykladnik - 1 );
  }
}

int main()
{
  int liczbaP;
  int wykladnikP;

  printf("Podaj liczbe oraz wykladnik, a ja podam ci ile to wynosi: \n");
  
  scanf("%d", &liczbaP);
  scanf("%d", &wykladnikP);

  printf("Wynik to: %d", potega(liczbaP, wykladnikP ));

  return 0;
}
