#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "C programming";
  char str2[20]="Coding";

  // copying str1 to str2
  strcpy(str1,str2);

  puts(str1); // C programming

  return 0;
}