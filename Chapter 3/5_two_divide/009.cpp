#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

ll cal(ll x,ll n,ll m){
    ll ans=1;
    for(ll i=0;i<n;i++){
        ans = ans*x%m;
    }
    return ans;
}

int main(){
    printf("%lld\n",cal(2,9,10));
    system("pause");
    return 0;
}