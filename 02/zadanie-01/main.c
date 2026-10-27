#include <math.h>
#include <stdio.h>

int main()
{
  int liczbaU;
  int licznik;
  float suma ;
   float srednia;
   int najW, najM ;
  najW =0; najM = 1874919424;
  liczbaU = 1;
  licznik = 0;
 
   printf("Podawaj liczby az trafisz na fajna a ja ci cos o niej powiem :) \n");
  
  while (liczbaU != 0) {
    scanf("%d", &liczbaU);
    suma += liczbaU;

    if( najW < liczbaU ){ najW = liczbaU ;}
    if (najM > liczbaU && liczbaU != 0) { najM = liczbaU;}
    
    licznik++;
    }

    
    srednia = suma / licznik ;
    
  printf("Najwieksza z liczb to: %d , natomiast najmniejsza to: %d , ich laczna suma wynosi: %f , a ich srednia: %f",najW,najM,suma,srednia);
  

  
  return 0;
}
