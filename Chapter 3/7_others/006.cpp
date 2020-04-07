#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <math.h>

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

int randselect(int num[],int left,int right,int k){
    if(left==right){
        return left;
    }
    int m=randpartition(num,left,right);
    if(m==k){
        return m;
    }
    else if(m>k){
        randselect(num,left,m,k);
    }
    else{
        randselect(num,m,right,k-m);
    }
}

int main(){
    int num[]={3,1,2,4,5,7,6};
    int x=sizeof(num)/4;
    randpartition(num,0,x-1);
    for(int i=0;i<x;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

//随机选择算法