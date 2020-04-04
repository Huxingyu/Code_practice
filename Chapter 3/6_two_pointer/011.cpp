#include <stdio.h>
#include <stdlib.h>
#define max 20

int min(int x,int y){
    if(x<=y){
        return x;
    }
    else{
        return y;
    }
}

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

void merge_sort(int num[]){
    int mid,n=7;
    for(int step=2;step/2<n;step*=2){
        for(int i=1;i<=n;i+=step){
            mid=i+step/2-1;
            if(mid+1<=n){
                merge(num,i,mid,mid+1,min(i+step-1,n));
            }
        }
    }
}

int main(){
    int num[]={66,12,33,57,64,27,18};
    int x=sizeof(num)/4;
    merge_sort(num);
    for(int i=0;i<7;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}