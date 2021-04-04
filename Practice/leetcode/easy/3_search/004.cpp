#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int x=0;
        for(int i=0;i<grid.size();i++){
            x+=search(grid[i]);
        }
        return x;      
    }
    int search(vector<int>& nums) {
        int num_size=nums.size();
        int mid,left=0,right=num_size-1,target=0;
        //[5,4,3,2,1,0,-1,-2,-3]
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
            return num_size-left;
        }
    }
};