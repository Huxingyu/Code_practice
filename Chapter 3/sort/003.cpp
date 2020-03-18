#include <stdio.h>
#include <stdlib.h>

int main(){
    int temp,x[5]={15,44,63,12,21};
    for(int i=1;i<5;i++){
        for(int j=0;j<=4-i;j++){
            if(x[4-j]<x[3-j]){
                temp=x[4-j];
                x[4-j]=x[3-j];
                x[3-j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n",x[i]);
    }
    system("pause");
    return 0;
}