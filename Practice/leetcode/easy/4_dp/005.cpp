//300. Longest Increasing Subsequence

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int temp,n=nums.size(),ans=-1;
        int dp[2500];
        for(int i=0;i<n;i++){
            dp[i]=1;
            for(int j=0;j<i;j++){       //j!=i
                if(nums[i]>nums[j]){
                    temp=dp[j]+1;       //temp=dp[0]+1=2
                    dp[i]=max(dp[i],temp);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};