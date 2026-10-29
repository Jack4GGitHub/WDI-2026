#include <stdio.h>


int max(int a, int b)
{
  if(a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int min(int a, int b)
{
  if(a < b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int main()
{
  int a;
  int b;

  scanf("%d", &a);
  scanf("%d", &b);

  printf("Najw: %d\n", max(a, b));
  printf("Najmn: %d\n", min(a, b));


  return 0;
}
