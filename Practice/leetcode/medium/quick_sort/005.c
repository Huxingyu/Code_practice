#include <stdlib.h>
#include <stdio.h>
#define max 100

void merge(int num[],int l1,int r1,int l2,int r2){
    int i=l1,j=l2,temp[max],index=0;
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
    for(int k=0;k<index;k++){
        num[l1+k]=temp[k];
    }
}

void merge_sort(int num[],int left,int right){
    int mid=(left+right)/2;
    if(left<right){         
        merge_sort(num,left,mid);
        merge_sort(num,mid+1,right);
        merge(num,left,mid,mid+1,right);
    }
}

int main(){
    int num[]={66,12,33,57,64,27,18};
    int x=sizeof(num)/4;
    merge_sort(num,0,x-1);
    for(int i=0;i<x;i++){
        printf("%d ",num[i]);
    }
    system("pause");
    return 0;
}