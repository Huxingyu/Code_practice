#include <stdio.h>
#include <stdlib.h>

int partition(int num[],int left,int right){
    int temp=num[left];
    while(left<right){
        while(left<right && num[right]>temp){
            right--;
        }
        num[left]=num[right];
        while(left<right && num[left]<=temp){
            left++;
        }
        num[right]=num[left];
    }
    num[left]=temp;
    return left;
}

void quicksort(int num[],int left,int right){
    int mid=partition(num,left,right);
    if(left<right){
        quicksort(num,left,mid-1);
        quicksort(num,mid+1,right);
    }
}

int main(){
    int num[]={3,1,2,5,6,4};
    int n=sizeof(num)/4;
    quicksort(num,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    system("pause");
    return 0;
}