#include <stdio.h>
#include <stdlib.h>

void change(int x[]){
    x[0]=0;
    x[1]=1;
    x[2]=2;
}

int main(){
    int a[3]={0};
    for(int i=0;i<3;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    change(a);
    for(int i=0;i<3;i++){
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}