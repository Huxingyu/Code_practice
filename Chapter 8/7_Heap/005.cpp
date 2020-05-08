#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n,num[]={85,55,82,57,68,92,99,98,66,56};

void down_adjust(int low,int high){
    int i=low,j=i*2;
    while(j<=high){
        if(j+1<=high && num[j+1]>num[j]){
            j=j+1;
        }
        if(num[j]>num[i]){
            swap(num[i],num[j]);
            i=j;
            j=j*2;
        }else{
            break;
        }
    }
}

void creat_heap(){
    for(int i=n/2;i>=1;i--){
        down_adjust(i,n);
    }
}

int main(){
    n=sizeof(num)/4;
    creat_heap();
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    system("pause");
    return 0;
}