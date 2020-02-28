#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
//   char y[]={};
//   char x[]={"huxingyu"};
//   sscanf(x,"%s",y);
//   puts(y);
  int n;
  char x[]={"123"};
  sscanf(x,"%d",&n);
  printf("%d\n",n);
  system("pause");
  return 0;
}