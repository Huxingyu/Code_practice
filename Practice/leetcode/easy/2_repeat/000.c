#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize){
    int x=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                return true;
                x=1;
                break;
            }
        }
        if(x==1){
            break;
        }
    }
    return false;
}