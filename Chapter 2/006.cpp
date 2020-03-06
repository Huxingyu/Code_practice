#include <stdio.h>
#include <stdlib.h>

int sum[20],i=0;

int change(int x,int d){
    while(x!=0){
        sum[i]=x%d;
        x/=d;
        i++;
    }
    return i;
}

int main(){
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    change(a+b,x);
    while(i--){
        printf("%d",sum[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}