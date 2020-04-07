#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool isprime(int x){
    if(x<=1){               //警惕用户
        return false;
    }
    int y=(int)sqrt(1.0*x);
    for(int i=2;i<=y;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int x;
    while(scanf("%d",&x)!=EOF){
        printf("%d\n",isprime(x));
    }
    system("pause");
    return 0;
}