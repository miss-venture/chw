#include <stdio.h>

int main ()
{
  int two = 2;
  char initial = 'E';
  int test = initial;

  printf("The int is %d.\n", two);
  printf("The char is %c.\n", initial);
  printf("Char as int is %d.\n", test);

  initial += 1;

  printf("Add one to char gives %c.\n", initial);

  return 0;
}