#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char str[30] = "happy C programming";
  
  printf("문자열\"%s\"의 길이: %i\n", str, strlen(str));
  
  system("PAUSE");	
  return 0;
}
