#include <stdio.h>

int stringlength(char string[]);

int main()
{
  char str[]= "The quick brown fox";

  printf ("The length of the string %s is %d\n", str, stringlength(str));
}

int stringlength(char string[])
{
  int count = 0;
  for (int i=0; string[i] != '0'; i++)
  {
    count++;
  }
  return count;

}
