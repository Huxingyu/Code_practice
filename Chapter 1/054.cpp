#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char x[]={};
    char y[]={};
    gets(x);
    gets(y);
    int n=strcmp(x,y); //problem
    printf("%d\n",n);
    system("pause");
    return 0;
}