#include <stdio.h>
#include <stdlib.h>
#define max 10

int n,total,weight[max],price[max];
double avg[max];

int main(){
    scanf("%d %d",&n,&total);
    for(int i=0;i<n;i++){
        scanf("%d",weight[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",price[i]);
    }
    for(int i=0;i<n;i++){
        avg[i]=(double)price[i]/weight[i];
    }
    for(int i=0;i<n;i++){
        printf("%f",avg[i]);
    }
    system("pause");
    return 0;
}

//有问题