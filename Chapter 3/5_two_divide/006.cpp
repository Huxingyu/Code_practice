#include <stdio.h>
#include <stdlib.h>
#define eps 1e-5            // 这儿出错了

double mul(double a){
    return a*a;
}

double cal(double left,double right,int x){
    double mid;
    while(right-left>eps){      //误差过大的时候一直执行
        mid=(left+right)/2;
        if(mul(mid)<x){
            left=mid;
        }
        else{
            right=mid;
        }
    }
    return mid;
}

int main(){
    printf("%f",cal(1,5,9));
    system("pause");
    return 0;
}