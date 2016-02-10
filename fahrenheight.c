#include <stdio.h>

int main()
{
  int fahrenheight;
  int celcius;

  printf ("Fahrenheight\t Celcius\n");
  printf ("=======================\n");

  for (fahrenheight=0; fahrenheight <= 300; fahrenheight +=10)
    {
        celcius= ((5*(fahrenheight-32))/9);
        printf("\t%d \t%d\n", fahrenheight, celcius);
    }

return 0;
}
