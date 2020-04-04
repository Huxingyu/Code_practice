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
    if(left<right){                  //BIG ERROR
        int mid=partition(num,left,right);
        quicksort(num,left,mid-1);      //左区间快排
        quicksort(num,mid+1,right);     //右区间快排
    }
}

int main(){
    int num[11]={35,18,16,72,24,65,12,88,46,28,55};
    int x=sizeof(num)/4;
    quicksort(num,0,x-1);
    for(int i=0;i<x;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}