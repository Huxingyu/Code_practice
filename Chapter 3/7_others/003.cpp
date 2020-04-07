#include <stdio.h>
#include <stdlib.h>

int partition(int num[],int left,int right){
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

int main(){
    int num[]={3,1,2,4,6,5};
    int n=sizeof(num)/4;
    int x=partition(num,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    printf("%d\n",x);
    system("pause");
    return 0;
}