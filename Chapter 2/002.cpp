#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,a,b,n[10]={0},m[10]={0};
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d %d",&a,&b);
        n[a]+=b;
    }
    int num,max=-1;
    for(int i=1;i<=x;i++){
        printf("n[%d]=%d\n",i,n[i]);
    }
    for(int i=1;i<=x;i++){
        if(n[i]>max){
            max=n[i];
            num=i;
        }
    }
    printf("%d %d\n",num,max);
    system("pause");
    return 0;
}