//137. Single Number II

#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            unordered_map<int,int> mp;
            int n=nums.size();
            for(int i=0;i<n;i++){
                mp[nums[i]]++;
            }
            for(unordered_map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
                if(it->second==1){
                    return it->first;
                }
            }
            return -1;
        }
};