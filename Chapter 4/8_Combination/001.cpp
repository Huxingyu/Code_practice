#include <stdio.h>
#include <stdlib.h>

int F(int x){
    if(x==1){
        return 1;
    }
    else{
        return F(x-1)*x;
    }
}

int main(){
    int x;
    scanf("%d",&x);
    int ans=F(x);
    printf("%d\n",ans);
    system("pause");
    return 0;
}