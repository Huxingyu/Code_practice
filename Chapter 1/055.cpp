#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char x[]={};
    char y[]={};
    gets(x);
    strcpy(y,x); 
    puts(y);
    system("pause");
    return 0;
}