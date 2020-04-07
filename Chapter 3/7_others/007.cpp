#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <math.h>
#define max 10

using namespace std;

int randpartition(int num[],int left,int right){
    int p=(int)(round(1.0*rand()/RAND_MAX*(right-left)+left));
    swap(num[p],num[left]);
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

int quickselect(int num[],int left,int right,int k){
    if(left==right){
        return num[left];
    }
    int p=randpartition(num,left,right);    //绝对位置
    int m=p-left+1;                         //相对位置
    if(m==k){
        return num[p];
    }
    else if(m>k){
        quickselect(num,left,p-1,k);
    }
    else{
        quickselect(num,p+1,right,k-m);
    }
}

int main(){
    int ans[max],num[]={3,1,2,4,5,7,6};
    int x=sizeof(num)/4;
    randpartition(num,0,x-1);
    for(int i=0;i<x;i++){
        ans[i]=quickselect(num,0,x-1,i+1);
    }
    for(int i=0;i<x;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

//随机选择算法
