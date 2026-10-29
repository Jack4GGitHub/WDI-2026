#include <stdio.h>
#include <sys/types.h>


int main()
{
  int liczbaP, liczbaD, wynik;
  char znak;

  scanf("%d",&liczbaP);
  scanf("%d",&liczbaD);
  scanf("%hhd",&znak);


  switch (znak)
  {
    case '+':
        wynik = liczbaP + liczbaD;
      break;
    case '-':
        wynik = liczbaP - liczbaD;
      break;
    case '*':
        wynik = liczbaP * liczbaD;
      break;
    case '/':
        wynik = liczbaP / liczbaD;
      break;
    case '%':
        wynik = liczbaP % liczbaD;
      break;
  }

    printf("Wynikiem twoich operacji jest: %d",wynik);
  
  return 0;
}
