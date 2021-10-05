#include <stdio.h>

int main()
{
  long blanks, tabs, nl;

  blanks = 0;
  tabs = 0;
  nl = 0; 

  int c;
  while((c = getchar()) != EOF)
  if(c == ' ')
    ++blanks;
  else if(c == '\t')
    ++tabs;
  else if(c == '\n')
    ++nl;

  printf("Blanks: %ld\nTabs: %ld\nNewlines: %ld\n", blanks, tabs, nl);
}

