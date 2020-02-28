#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
  int n=123;
  char x[]={};
  sprintf(x,"%d",n);
  printf("%s\n",x);
  system("pause");
  return 0;
}

//sscanf left->right
//sprintf right->left