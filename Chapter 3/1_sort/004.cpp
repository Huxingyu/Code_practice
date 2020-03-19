#include <stdio.h>
#include <stdlib.h>

void sort(int n,int x[]){
    for(int i=0;i<=n-1;i++){
        int k=i;
        for(int j=i;j<=n-1;j++){
            if(x[j]<x[k]){
                k=j;
            }
        }
        int temp=x[k];
        x[k]=x[i];
        x[i]=temp;
    }
}

int main(){
    int i=0;
    int x[]={5,4,3,2,1};
    int y=sizeof(x)/4;
    sort(y,x);
    for(int i=0;i<y;i++){
        printf("%d\n",x[i]);
    }
    system("pause");
    return 0;
}

//选择排序，只针对已知个数
//未知个数，vector