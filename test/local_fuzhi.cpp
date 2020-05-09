#include <stdio.h>
#include <stdlib.h>

int x=1;

int cal(int x){
    x=2;
    return x;
}

int main(){
    printf("%d\n",x);
    cal(x);
    printf("%d\n",x);
    system("pause");
    return 0;
}