#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll cal(ll n,ll x){
    ll temp=cal(n,x/2);     //放到这儿，就会死循环
    if(x==0){
        return 1;
    }
    if(x%2==0){
        return temp*temp;
    }
    else{
        return temp*temp*n;
    }
}

int main(){
    printf("%lld\n",cal(2,10));
    system("pause");
    return 0;
}