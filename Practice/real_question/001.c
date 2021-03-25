//判断2的整次幂

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_it(int x){
    if(x==2){
        return true;
    }else{
        if(x%2!=0){
            return false;
        }else{
            x/=2;
            is_it(x);
        }
    }
}

int main(){
    int x;
    while(scanf("%d",&x)!=EOF){
        if(is_it(x)){
            printf("yes");
        }else{
            printf("no");
        }  
    }
    system("pause");
    return 0;
}