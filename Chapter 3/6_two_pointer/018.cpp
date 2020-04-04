#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int partition(int num[],int left,int right){
    int x=rand()%10+0;
    swap(num[left],num[x]);
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

//基于随机选择算法的快速排序
//problem