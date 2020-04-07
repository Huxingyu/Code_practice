#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);          //这儿写不写return有什么区别呢？
    }
}

int main(){
    printf("%d\n",gcd(3,9));
    system("pause");
    return 0;
}