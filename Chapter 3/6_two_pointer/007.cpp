#include <stdio.h>
#include <stdlib.h>

void merge(int num[],int ans[],int l1,int r1,int l2,int r2){
    int n=0;
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
    for(int i=l1;i<r2;i++){
        num[i]=ans[i];
    }
}

void merge_sort(int num[],int ans[],int left,int right){
    int mid;
    if(left<right){
        mid=(left+right)/2;
        merge_sort(num,ans,left,mid);
        merge_sort(num,ans,mid+1,right);
        merge(num,ans,left,mid,mid+1,right);
    }
}

int main(){
    int num[7]={66,12,33,57,64,27,18};
    int ans[7];
    merge_sort(num,ans,0,7);
    for(int i=0;i<7;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}