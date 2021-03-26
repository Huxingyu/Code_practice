#include <vector>
#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){     //mp [1,0,1,1]
            if(mp.count(nums[i])==0){
                mp[nums[i]]=i;              //mp[1]=0...i=2
            }else{
                if(abs(i-mp[nums[i]])<=k){       //i=2,mp[1]=0->mp[1]=2
                    return true;                 //i=3
                }else{
                    mp[nums[i]]=i;
                }
            }
        }
    }
};