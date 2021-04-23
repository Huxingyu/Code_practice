//leetcode 121. Best Time to Buy and Sell Stock

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_price=1e9,max_sell=0;
        for(int i=0;i<n;i++){
            max_sell=max(max_sell,prices[i]-min_price);
            min_price=min(min_price,prices[i]);
        }
        return max_sell;
    }
};

int main(){
    Solution x;
    vector<int> vt={7,6,4,3,1};
    cout<<x.maxProfit(vt)<<endl;
    system("pause");
    return 0;
}