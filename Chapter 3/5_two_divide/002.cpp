#include <stdio.h>
#include <stdlib.h>

int search(int num[],int left,int right,int x){
    int mid;
    while(left<=right){
        mid = (right+left)/2;
        if(x==num[mid]){
            return mid;
        }
        else if(x<num[mid]){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;    
}

int main(){
    int num[10]={0,1,3,6,7,8,9,11,23,46};
    int x=search(num,0,9,3);
    printf("%d\n",x);
    system("pause");
    return 0;
}