#include <cstdlib>
#include <iostream>

using namespace std;

int part(int num[],int left,int right){
    // int rand_num=rand()%(right-left)+left;
    // swap(num[left],num[rand_num]);
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

void quick_sort(int num[],int left,int right){
    int mid=part(num,left,right);
    if(left<right){
        quick_sort(num,left,mid-1);
        quick_sort(num,mid+1,right);
    }
}

int main(){
    int num[]={3,1,2,5,4};
    quick_sort(num,0,4);
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    } 
    system("pause");
    return 0;
}