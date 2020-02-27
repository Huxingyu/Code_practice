#include <stdio.h>
#include <stdlib.h>

int main(){
    char x[]={};
    scanf("%[^\n]s",x);
    printf("%s\n",x);
    system("pause");
    return 0;
}