//1480. Running Sum of 1d Array

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        ans[0]=nums[0];
        for(int i=1;i<n;i++){
            ans[i]=nums[i]+ans[i-1];
        }
        return ans;      
    }
};

int main(){
    vector<int> vt={3,1,2,10,1};
    Solution x;
    vector<int> ans=x.runningSum(vt);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    system("pause");
    return 0;
}