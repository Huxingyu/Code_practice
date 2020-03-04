#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[10]={};
    for(int i=0;i<10;i++){
        scanf("%d",x+i);
    }
    for(int i=0;i<10;i++){
        printf("%d\n",*(x+i));
    }
    system("pause");
    return 0;
}