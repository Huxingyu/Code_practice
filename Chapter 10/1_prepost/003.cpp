//high up!!!

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define max_num 10

using namespace std;

int main(){
    int n,num[max_num][max_num],dp[max_num][max_num];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            scanf("%d",&num[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        dp[n][i]=num[n][i];
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i;j++){
            dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+num[i][j];
        }
    }
    printf("%d\n",dp[1][1]);
    system("pause");
    return 0;
}