#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define max 11

using namespace std;

int search(int num[],int left,int right,int x){
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(num[mid]==x){
            return mid;
        }
        else if(num[mid]>x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){
    int num[max]={9,8,7,6,5,4,3,2,1};
    int x=search(num,0,9,5);
    printf("%d\n",x);
    system("pause");
    return 0;
}
