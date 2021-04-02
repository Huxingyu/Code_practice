//merge num

#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    // Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
    int i=0,j=0,index=0;
    int ans[500];
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            ans[index++]=nums1[i++];
        }else{
            ans[index++]=nums2[j++];
        }
    }
    while(i<m){
        ans[index++]=nums1[i++];
    }
    while(j<n){
        ans[index++]=nums2[j++];
    }
    for(int i=0;i<index;i++){
        nums1[i]=ans[i];
    }
}

int main(){
    int nums1[] = {1,2,3,0,0,0}, m = 3, nums2[] = {2,5,6}, n = 3;
    int i=sizeof(nums1)/4,j=sizeof(nums2)/4;
    merge(nums1,i,m,nums2,j,n);
    system("pause");
}