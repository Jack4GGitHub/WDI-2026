#include <stdio.h>
#define RozmiarT 10

void quick_sort(int Tablica[], int rozmiar)
{
  for ( int i = 0; i < rozmiar / 2; i++) {
    
  }
}


int main()
{
  int T[RozmiarT];

  printf("Podaj dziesiec elementów do wpisania w tablice:  \n");
  
  for( int i=0 ; i < RozmiarT; i++)
  {
    scanf("%d",&T[i]);
  }

  quick_sort(T, RozmiarT);

  printf("Po posortowaniu ta tablica będzie wyglądać następująco: \n");

  for(int i=0; i < RozmiarT; i++)
  {
    printf(" %d", T[i]);  
  }
  
  
  
  return 0;
}
