#include <stdio.h>
#include <stdlib.h>

int main(){
    char x[10]={};
    for(int i=0;i<3;i++){
        x[i]=getchar();
    }
    for(int i=0;i<3;i++){
        putchar(x[i]);
    }
    system("pause");
    return 0;
}