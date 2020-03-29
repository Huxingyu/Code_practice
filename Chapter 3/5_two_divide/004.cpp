#include <stdio.h>
#include <stdlib.h>
#define max 11

int search(int num[],int left,int right,int x){
    int mid;
    while(left<right){
        mid = (left+right)/2;
        if(num[mid]>=x){
            right=mid;
        }
        else{
            left=mid+1;
        }
    }
    return left;
}

int main(){
    int num[max]={1,2,3,3,3,3,3,5,6};
    printf("%d %d\n",search(num,0,10,3),search(num,0,10,4));
    system("pause");
    return 0;
}