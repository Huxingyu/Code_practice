//122. Best Time to Buy and Sell Stock II

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size(),min_price=prices[0];
            vector<int> dp(n,0);
            for(int i=1;i<n;i++){
                dp[i]=max(dp[i-1],prices[i]-min_price);
                min_price=min(min_price,prices[i]);
            }            
            return dp[n-1];
        }
};