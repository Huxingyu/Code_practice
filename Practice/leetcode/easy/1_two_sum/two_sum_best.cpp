//two sum

#include <iostream>
#include <vector>
#include <cstdlib>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> mp;
            for(int i=0;i<nums.size();i++){
                if(mp.count(target-nums[i])){
                    return vector<int>{i,mp[target-nums[i]]};
                }else{
                    mp[nums[i]]=i;
                }
            }
            return vector<int>();
        }
};

int main(){
    Solution x;
    vector<int> num={3,2,4};
    int target=6;
    vector<int> ans=x.twoSum(num,target); 
    for(auto x=ans.begin();x!=ans.end();x++){
        cout<<*x<<" ";
    }    
    system("pause");
    return 0;
}