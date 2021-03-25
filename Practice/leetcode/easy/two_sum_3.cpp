//two sum

#include <iostream>
#include <vector>
#include <cstdlib>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		// Keys are the array values and values are the associated array indices
        unordered_map<int, int> hash; // Use as a hash table, instead of creating one
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
            if (hash.count(target - nums[i])) // If the partner of this value to reach the target sum has been saved already
            {
                result.push_back(hash[target - nums[i]]); // Get index of other value
                result.push_back(i);
                return result;
            }
            else // Pair has not yet been found, so save value to hash table
                hash[nums[i]] = i;
        return result;
    }
};

int main(){
    Solution x;
    vector<int> num={2,3,4};
    int target=6;
    vector<int> ans=x.twoSum(num,target); 
    for(auto x=ans.begin();x!=ans.end();x++){
        cout<<*x<<" ";
    }    
    system("pause");
    return 0;
}