#include <stdio.h>

int main()
{
  int result;
  
  while( result = (getchar() != EOF) && result != 0)
    printf("getchar() != EOF is %d\n", result);
  
  printf("getchar() != EOF is %d\n", result);
}
