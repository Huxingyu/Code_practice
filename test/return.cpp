//研究一下return

#include <stdio.h>
#include <stdlib.h>

bool test(){
    int x=2;
    if(x==1){
        return true;
    }
    else{
        if(x==2){
            return false;
        }
        if(x==3){
            return true;
        }
    }
    return true;
}

int main(){
    bool x=test();
    if(x==false){
        printf("ppp");
    }
    system("pause");
    return 0;
}

