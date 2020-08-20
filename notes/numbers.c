#include <stdio.h>

int main(int argc, char* argv[])
{
  long what_is_long = 1 * 1024 * 1024 * 1024;

  what_is_long = what_is_long * 1024 * 1024 * 9999999999999999999;

  printf("This is one long %ld.\n", what_is_long);

  return 0;
}