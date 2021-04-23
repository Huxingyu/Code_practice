//leetcode 121. Best Time to Buy and Sell Stock

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),max=0;
        for(int i=0;i<n;i++){
            int _max=*max_element(prices.begin()+i,prices.end());
            //iterator like pointer,use "*" to unflod value.
            int temp=_max-i;
        }
    }
};