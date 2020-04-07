#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <time.h>

using namespace std;

int randpartiton(int num[],int left,int right){
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
    int p=randpartiton(num,left,right);     //绝对位置
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
    int num[]={4,1,2,6,7,3,5};
    int x=sizeof(num)/4;
    int ans=quickselect(num,0,x-1,3);
    printf("%d\n",ans);
    system("pause");
    return 0;
}