#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x<0){
        printf("-");
    }
    else if(x>10){
        printf("--");
    }
    else{
        printf("yes");
    }
    system("pause");
    return 0;
}