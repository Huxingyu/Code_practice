#include <iostream>
#include <cstdlib>

using namespace std;

int quick_basic(int num[],int left,int right){
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
    while(left!=right){                       //error
        int x=quick_basic(num,left,right);
        quick_sort(num,left,x);
        quick_sort(num,x,right);    
    }
}

int main(){
    int num[]={35,18,16,72,24,65,12,88,46,28,55};
    int x=sizeof(num)/4;
    quick_sort(num,0,x-1);
    for(int i=0;i<x;i++){
        cout<<num[i]<<" ";
    }
    system("pause");
    return 0;
}