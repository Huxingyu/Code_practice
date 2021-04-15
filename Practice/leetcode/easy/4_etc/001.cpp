#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>
#define max 100

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int num[30000]={0},n_num[30000]={0};
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                num[nums[i]]++;
            }else{
                n_num[-nums[i]]++;
            }   
        }
        for(int i=0;i<n;i++){
            if(nums[i]>=0 && num[nums[i]]==1){
                return nums[i];
            }
            if(nums[i]<0 && n_num[-nums[i]]==1){
                return nums[i];
            }
        }
        return 0;
    }
};