#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE* fp;
  char str[100];
  int i;
  
  //1. open file
  fp = fopen("sample.txt", "w");
  
  //2. write file
  for(i = 0; i < 3; i++)
  {
        printf("input a word: ");
        scanf("%s", str);
        fprintf(fp, "%s\n", str);
  }
  
  //3. close file
  fclose(fp);
  
  system("PAUSE");	
  return 0;
}
