#include <stdio.h>


int main()
{
  float a;
  float b;
  char znak;
  int opcja;

  a = 0;
  b = 0;
  znak = '+';
  opcja = 0;

  while(opcja != 4)
  {
    printf("\nWynik: ");
    switch(znak)
    {
      case '+':
        printf("%f\n", a + b);
        break;
      case '-':
        printf("%f\n", a - b);
        break;
      case '*':
        printf("%f\n", a * b);
        break;
      case '/':
        if(b != 0)
        {
          printf("%f\n", a / b);
        }
        else
        {
          printf("Blad dzielenie przez 0? ajaj matematyka trudna rzecz\n");
        }
        break;
      case '%':
        if((int)b != 0)
        {
          printf("%d\n", (int)a % (int)b);
        }
        else
        {
          printf("Blad bo jak dobrze wiemy dzielenie przez 0 jest nie ok!!!\n");
        }
        break;
    }

    printf("\nMasz tutaj dostepne opcje:\n");
    printf("Zmiana pierwszej liczby (aktualnie: %f) [1]\n", a);
    printf("Zmiana drugiej liczby (aktualnie: %f) [2]\n", b);
    printf("Wybor dzialania (aktualnie: %c) [3]\n", znak);
    printf("Zakonczenie programu [4]\n");
    printf("Co wybierasz?: ");
    scanf("%d", &opcja);

    switch(opcja)
    {
      case 1:
        printf("Podaj pierwsza liczbe: ");
        scanf("%f", &a);
        break;
      case 2:
        printf("Podaj druga liczbe: ");
        scanf("%f", &b);
        break;
      case 3:
        printf("Podaj znak dzialania (+, -, *, /, %%): ");
        scanf(" %c", &znak);
        break;
      case 4:
        break;
    }
  }


  return 0;
}
