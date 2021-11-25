#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,temp;
    scanf("%d",&n);
    int *p=(int*)malloc(sizeof(int)*n);     //指针起到数组的作用
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        p[i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    system("pause");
    return 0;
}