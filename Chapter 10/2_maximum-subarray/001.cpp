#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

const int max_num=10;

int main(){
    int n,num[max_num],dp[max_num];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    dp[0]=num[0];
    for(int i=1;i<n;i++){
        dp[i]=max(num[i],num[i]+dp[i-1]);
    }
    int ans=dp[0];
    for(int i=1;i<n;i++){
        if(dp[i]>ans){
            ans=dp[i];
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}