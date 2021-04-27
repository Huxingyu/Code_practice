#include <iostream>
#include <vector>
#include <algorithm>
#define max 10

using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
    void merge(vector<int>& num,int l1,int r1,int l2,int r2){
        int i=l1,j=l2,index=0;
        vector<int> temp(r2-l1+1);
        while(i<=r1 && j<=r2){
            if(num[i]<=num[j]){
                temp[index++]=num[i++];
            }else{
                temp[index++]=num[j++];
            }
        }
        while(i<=r1){
            temp[index++]=num[i++];
        }
        while(j<=r2){
            temp[index++]=num[j++];
        }
        for(int i=0;i<index;i++){
            num[l1+i]=temp[i];
        }
    }

    void merge_sort(vector<int>& num,int left,int right){
        int mid=(left+right)/2;
        if(left<right){
            merge_sort(num,left,mid);
            merge_sort(num,mid+1,right);
            merge(num,left,mid,mid+1,right);
        }
    }
};



int main(){
    vector<int> num={5,4,3,2,1,-1};
    Solution x;
    x.merge_sort(num,0,num.size()-1);
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
    }
    system("pause");
    return 0;
}