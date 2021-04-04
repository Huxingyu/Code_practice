//逆序，查找

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,left=0,right=nums.size()-1;
        //[5,4,3,2,1,0]
        while(left<=right){
            mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return -1;
    }
};

int main(){
    vector<int> vt={5,4,3,2,2,1};
    Solution x;
    int ans=x.search(vt,2);
    cout<<ans<<endl;
    system("pause");
    return 0;
}