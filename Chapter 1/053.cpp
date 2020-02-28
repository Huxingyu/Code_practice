#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char x[]={};
    gets(x);
    int n=strlen(x);
    printf("%d\n",n);
    system("pause");
    return 0;
}