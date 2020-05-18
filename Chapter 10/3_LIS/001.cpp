#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

const int max_num=10;

int main(){
    int n,num[max_num],dp[max_num];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            //最长不下降序列-状态转移方程
            //dp[i]=max(dp[j]+1,1)
            //j<i && num[j]<=num[i]
            if(num[j]<=num[i] && dp[j]+1>dp[i]){
                dp[i]=dp[j]+1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",dp[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
