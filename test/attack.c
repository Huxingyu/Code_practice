#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[10]={0};
    gets(str);
    printf("%s\n",str);
    system("pause");
    return 0;
}