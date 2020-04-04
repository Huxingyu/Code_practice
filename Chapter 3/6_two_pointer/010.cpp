#include <stdio.h>
#include <stdlib.h>
#define max 10

void merge(int A[],int l1,int r1,int l2,int r2){
    int n=0,temp[max];
    int i=l1,j=l2;
    while(i<=r1 && j<=r2){
        if(A[i]<=A[j]){
            temp[n++]=A[i++];
        }
        else{
            temp[n++]=A[j++];
        }
    }
    while(i<=r1){
        temp[n++]=A[i++];
    }
    while(j<=r2){
        temp[n++]=A[j++];
    }
    for(int i=0;i<n;i++){
        A[l1+i]=temp[i];
    }
}

void mergesort(int A[],int left,int right){
    int mid;
    if(left<right){
        mid=(left+right)/2;
        mergesort(A,left,mid);
        mergesort(A,mid+1,right);
        merge(A,left,mid,mid+1,right);
    }
}

int main(){
    int A[6]={3,1,2,6,4,5};
    mergesort(A,0,5);
    for(int i=0;i<6;i++){
        printf("%d ",A[i]);
    }
    system("pause");
    return 0;
}