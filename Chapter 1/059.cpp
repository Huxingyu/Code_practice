#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int x;
    double y;
    char str1[20]="1:3.14,hello",str2[10];
    sscanf(str1,"%d:%f,%s",&x,&y,str2);         //dont forget &.
    printf("%d %.1f %s\n",x,y,str2);    //problem
    system("pause");
    return 0;
}