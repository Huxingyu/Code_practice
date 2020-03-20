#include <stdio.h>
#include <stdlib.h>
#define max 100

int num[max]={0};

int main(){
    int n,m,x;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        num[x]++;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        printf("%d ",num[x]);
    }
    printf("\n");
    system("pause");
    return 0;
}