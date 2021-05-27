//268. Missing Number

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int ans;
            for(int i=0;i<=nums.size();i++){                    //[3,0,1]
                if(find(nums.begin(),nums.end(),i)!=nums.end()){
                    continue;
                }
                ans=i;
                break;
            }
            return ans;
        }
};