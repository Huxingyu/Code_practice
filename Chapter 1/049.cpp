#include <stdio.h>
#include <stdlib.h>

int main(){
    char x[5][5]={};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            x[i][j]=getchar();
        }
        getchar();
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            putchar(x[i][j]);
        }
        putchar('\n');
    }
    system("pause");
    return 0;
}