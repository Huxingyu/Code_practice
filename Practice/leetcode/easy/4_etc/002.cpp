#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num[50000]={0};
        int n_num[50000]={0};
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                num[nums[i]]++;
            }else{
                n_num[-nums[i]]++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>=0 && num[nums[i]]>n/2){
                return nums[i];
            }
            if(nums[i]<0 && num[-nums[i]]>n/2){
                return nums[i];
            }
        }
        return 0;      
    }
};