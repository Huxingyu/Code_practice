#include <stdio.h>
#include <stdlib.h>

int fab(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return fab(n-1)+fab(n-2);
    }
}

int main(){
    int x;
    scanf("%d",&x);
    printf("%d\n",fab(x));
    system("pause");
    return 0;
}