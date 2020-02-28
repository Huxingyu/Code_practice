#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
  char str[80];
  strcpy (str,"these ");
  strcat (str,"strings ");
  strcat (str,"are ");
  strcat (str,"concatenated.");
  puts (str);
  system("pause");
  return 0;
}