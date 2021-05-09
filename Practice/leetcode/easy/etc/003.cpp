//219. Contains Duplicate II

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])==0){
                mp[nums[i]]=i;
            }else{
                if(abs(i-mp[nums[i]])<=k){
                    return true;
                }else{
                    mp[nums[i]]=i;
                }
            }
        }
        return false;
    }
};