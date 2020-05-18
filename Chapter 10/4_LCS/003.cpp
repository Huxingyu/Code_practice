#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;
const int max_num=100;

int main(){
    char a[max_num],b[max_num],dp[max_num][max_num];
    gets(a+1);
    gets(b+1);
    int len_a=strlen(a+1);
    int len_b=strlen(b+1);
    for(int i=0;i<=len_a;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=len_b;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=len_a;i++){
        for(int j=1;j<=len_b;j++){
            if(a[i]==b[j]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    printf("%d\n",dp[len_a][len_b]);
    system("pause");
    return 0;
}