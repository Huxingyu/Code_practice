#include <stdio.h>
#include <stdlib.h>

int main(){
    char y[5][10]={};
    for(int i=0;i<3;i++){
        gets(y[i]);
    }
    for(int i=0;i<3;i++){
        puts(y[i]);
    }
    system("pause");
    return 0;
}