#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[]={10,20,30,40,50};
    int sum=0,x = sizeof(a)/4;
    for(int i=0;i<x;i++){
        sum+=a[i];
    }
    printf("%d\n",sum);
    system("pause");
    return 0;
}