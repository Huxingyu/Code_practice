//26. Remove Duplicates from Sorted Array

#include <vector>
#include <iostream>

using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int temp=-10001;
            vector<int>::iterator it=nums.begin();
            for(int i=0;i<nums.size();i++){
                if(nums[i]==temp){
                    nums.erase(it+i);
                    i--;
                    continue;
                }
                temp=nums[i];
            }
            return nums.size();
        }
};