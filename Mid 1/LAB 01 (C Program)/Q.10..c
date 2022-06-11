#include <stdio.h>

int main()
{
  int i = 1, N, E;
  long Power = 1;


  scanf(" %d", &N);

  scanf(" %d", &E);

  while(i <= E)
  {
  	Power = Power * N;
  	i++;
  }

  printf("Power= %ld", Power);

  return 0;
}
