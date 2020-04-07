#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <algorithm>
#define max 50

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

void quickselect(int num[],int left,int right,int k){
    if(left==right){
        return;
    }
    int p=randpartition(num,left,right);        //绝对位置
    int m=p-left+1;                             //相对位置
    if(m==k){
        return;
    }
    else if(m>k){
        quickselect(num,left,p-1,k);
    }
    else{
        quickselect(num,p+1,right,k-m);
    }
}

int main(){
    int n,sum=0,sum1=0,num[max];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    quickselect(num,0,n-1,n/2);
    for(int i=0;i<n/2;i++){
        sum1+=num[i];
    }
    printf("%d\n",(sum-sum1)-sum1);
    system("pause");
    return 0;
}