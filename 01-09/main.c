#include <stdio.h>

int main()
{
  int c;
  int inSpace = 0;

  while((c = getchar()) != EOF)
  {
    if(c == ' ')
    {
      if(inSpace == 0)
      {
        inSpace = 1;
        putchar(c);
      }
    }
    else
    {
      putchar(c);
      inSpace = 0;
    }
  } 
}
