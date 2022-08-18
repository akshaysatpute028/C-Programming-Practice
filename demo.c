#include <stdio.h>
#include <stdlib.h>
int main()
{
  char s[3][128] = {"SunBeam", "DAC", "W I M C"};
  char *p = (char *)s[2] + 2;
  printf("%c", *p);
  printf("%d", --*++p);
  printf("%c", *++p);
  return 0;
}