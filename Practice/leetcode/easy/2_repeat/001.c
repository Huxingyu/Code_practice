#include <stdio.h>
#include <stdlib.h>

int findRepeatNumber(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                return nums[i];
            }
        }
    }
    return -1;
}

int main(){
    int num[]={1,2,3,4,1};
    int ans=findRepeatNumber(num,5);
    printf("%d\n",ans);
    system("pause");
    return 0;
}