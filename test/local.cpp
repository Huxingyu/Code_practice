#include <stdio.h>
#include <stdlib.h>

void cal(int x){
    x=2;
}

void cal_R(int &x){     //这下知道&的用处了
    x=2;
}

int main(){
    int x=1;
    cal(x);
    printf("%d\n",x);
    cal_R(x);
    printf("%d\n",x);
    system("pause");
    return 0;
}