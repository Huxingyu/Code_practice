#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            map<int,bool> mp;
            //nums->int[x]-->x(int)
            for(auto& x:nums){
                if(mp.count(x)){
                    return true;
                }else{
                    mp[x]=true;
                }
            }
            return false;
        }
};