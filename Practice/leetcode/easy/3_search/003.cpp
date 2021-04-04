//逆序，找到第一个小于0的元素位置

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,left=0,right=nums.size()-1;
        //[3,2]
        while(left<right){
            mid=(left+right)/2;
            if(nums[mid]>=target){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        if(nums[left]>=0){
            return 0;
        }else{
            return nums.size()-left;
        }
    }
};


int main(){
    vector<int> vt={-1,-1,-2,-3};
    Solution x;
    int ans=x.search(vt,0);
    cout<<ans<<endl;
    system("pause");
    return 0;
}