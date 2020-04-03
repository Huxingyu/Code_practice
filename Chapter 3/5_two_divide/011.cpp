#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll cal(ll x,ll n, ll m){
    ll ans=1;
    while(n>0){
        if(n%2==1){
            ans = ans * x %m;
        }
        x*=x;
        n=n/2;
    }
    return ans;
}

int main(){
    printf("%lld\n",cal(2,10,10));
    system("pause");
    return 0;
}