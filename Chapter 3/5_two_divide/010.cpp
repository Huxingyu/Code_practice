#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll cal(ll x,ll n,ll m){
    if(n==0){
        return 1;
    }
    if(n%2!=0){
        return x*cal(x,n-1,m)%m;
    }
    else{
        ll temp=cal(x,n/2,m);
        return temp*temp%m;
    }
}

int main(){
    printf("%lld\n",cal(2,10,10));
    system("pause");
    return 0;
}