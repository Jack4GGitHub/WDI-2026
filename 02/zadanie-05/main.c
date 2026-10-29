#include <stdio.h>


int main()
{
  int ranga;

  printf("Podaj range (1-Poddany, 2-Giermek, 3-Rycerz, 4-Mag, 5-Krolowa): ");
  scanf("%d", &ranga);

  printf("\nUprawnienia:\n");

  switch(ranga)
  {
    case 5:
      printf("- Moze rozkazywac Krolowi\n");
      break;
    case 4:
      printf("- Moze rozmawiac z Krolem\n");
      break;
    case 3:
      printf("- Moze wchodzic do zamku codziennie oraz rekrutowac giermkow\n");
      break;
    case 2:
      printf("- Moze wchodzic na dziedziniec zamkowy codziennie\n");
        break;
    case 1:
      printf("- Moze czcic Krola\n"); break;
    default:
      printf("Niepoprawna ranga\n");
      break;
  }


  return 0;
}
