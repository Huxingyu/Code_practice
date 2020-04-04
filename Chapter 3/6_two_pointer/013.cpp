#include <stdio.h>
#include <stdlib.h>

void partition(int num[],int left,int right){
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
}

int main(){
    int num[11]={35,18,16,72,24,65,12,88,46,28,55};
    int x=sizeof(num)/4;
    partition(num,0,10);
    for(int i=0;i<x;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}