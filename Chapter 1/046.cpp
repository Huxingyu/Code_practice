#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[]={'h','u'};
    int x = strlen(str);
    //printf("%d\n",x);
    for(int i=0;i<x;i++){
        printf("%c",str[i]);
    }
    system("pause");
    return 0;
}