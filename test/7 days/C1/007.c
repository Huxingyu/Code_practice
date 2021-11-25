#include <stdio.h>
#include <stdlib.h>
#define max 100

int main(){
    int n,temp,num[max];      //n<100
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        num[i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    system("pause");
    return 0;
}