#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10]={};   //加与不加差别很大
    scanf("%d",a);
    for(int i=1;i<10;i++){
        a[i]=a[i-1]*2;
    }
    for(int i=0;i<10;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    system("pause");
    return 0;
}