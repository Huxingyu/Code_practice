#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,k,x,n[200]={0};
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&n[i]);
    }
    scanf("%d",&a);
    for(int i=0;i<x;i++){
        if((n[i]-a)==0){
            k=i;
            break;
        }
    }
    printf("%d\n",k);
    system("pause");
    return 0;
}