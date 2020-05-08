#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

const int max_num=11;
int num[max_num],n;

void down_adjust(int low,int high){
    int i=low,j=i*i;
    while(j<=high){
        if(j+1<=high && num[j+1]>num[j]){
            j=j+1;
        }
        if(num[j]>num[i]){
            swap(num[i],num[j]);
            i=j;
            j=j*2;
        }
    }
}

void creat_heap(){
    for(int i=n/2;i>=1;i--){
        down_adjust(i,n);
    }
}

//heap-sort
void sort_heap(){
    creat_heap();
    for(int i=n;i>=2;i--){
        swap(num[i],num[1]);
        down_adjust(1,i-1);
    }
}

int main(){
    int num[]={85,55,82,57,68,92,99,98,66,56};
    n=sizeof(num)/4;
    sort_heap();
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    system("pause");
    return 0;
}