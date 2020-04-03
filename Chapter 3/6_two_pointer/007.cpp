#include <stdio.h>
#include <stdlib.h>
#define max 20

void merge(int num[],int l1,int r1,int l2,int r2){
    int ans[max],n=0;
    int i=l1,j=l2;
    while(i<=r1 && j<=r2){
        if(num[l1]<=num[l2]){
            ans[n++]=num[i++];
        }
        else{
            ans[n++]=num[j++];
        }
    }
    while(i<=r1){
        ans[n++]=num[i++];
    }
    while(j<=r2){
        ans[n++]=num[j++];
    }
    for(int i=0;i<n;i++){
        num[l1+i]=ans[i];
    }
}

void merge_sort(int num[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        merge_sort(num,left,mid);
        merge_sort(num,mid+1,right);
        merge(num,left,mid,mid+1,right);
    }
}

int main(){
    int num[]={66,12,33,57,64,27,18};
    int x=sizeof(num)/4;
    merge_sort(num,0,x-1);
    for(int i=0;i<x-1;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}