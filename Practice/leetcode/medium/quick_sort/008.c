#include <stdio.h>
#include <stdlib.h>

int* sortArray(int* nums, int numsSize, int* returnSize){
    //如果只告诉你长度呢
}

int part(int num[],int left,int right){
    int temp=num[left];
    while(left<right){
        while(left<right && temp<=num[right]){
            right--;
        }
        num[left]=num[right];
        while(left<right && temp>=num[left]){
            left++;
        }
        num[right]=num[left];
    }
    num[left]=temp;
    return left;
}