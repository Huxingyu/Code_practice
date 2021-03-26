//two sum

#include <iostream>
#include <vector>
#include <cstdlib>
#include <unordered_map>

using namespace std;

class Solution {
public:
    unordered_map<int,int> twoSum(vector<int>& nums, int target) {
		// Keys are the array values and values are the associated array indices
        unordered_map<int, int> hash; // Use as a hash table, instead of creating one
        return hash;
    }
};

int main(){
    // Solution x;
    vector<int> num={2,3,4};
    int target=6;
    // vector<int> ans=x.twoSum(num,target); 
    // for(auto x=ans.begin();x!=ans.end();x++){
    //     cout<<*x<<" ";
    // }    
    Solution x;
    unordered_map<int,int> ans=x.twoSum(num,target);
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
        cout<<"???"<<endl;
    }
    system("pause");
    return 0;
}