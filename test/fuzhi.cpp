#include <stdio.h>
#include <stdlib.h>

int num[]={1,2,3};

void cal(int x[]){
    x[1]=0;
}

int main(){
    int n=sizeof(num)/4;
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    cal(num);
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}