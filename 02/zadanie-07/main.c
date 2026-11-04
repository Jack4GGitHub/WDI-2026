#include <stdio.h>


int main(){

  const unsigned granica = 20U;
  unsigned i;
  unsigned suma = 0U;

  for (i = 1U; i <= granica; i++) {
    if ( i % 3U == 0U)
    {
      suma += i;
    }
  }
   printf("Suma liczb podzielnych przez 3 wynosi: %u \n",suma); 
  return 0;
}
