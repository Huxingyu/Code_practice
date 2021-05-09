// /53. Maximum Subarray

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MIN,cur=0;
        for(int i=0;i<n;i++){
            cur+=nums[i];
            if(cur<nums[i]){    //satisfy this condition,cur's value miner than 0
                cur=nums[i];
            }
            res=max(cur,res);
        }
        return res;     
    }
};