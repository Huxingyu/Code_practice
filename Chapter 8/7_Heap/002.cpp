#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

const int max_num=100;
int num[max_num],n;


//(low,high)
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

void delet_heap(){
    num[1]=num[n--];
    down_adjust(1,n);
}