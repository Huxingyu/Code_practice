#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};

int main(){
    Solution x;
    vector<int> nums={5,2,3,1};
    vector<int> ans=x.sortArray(nums);
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}