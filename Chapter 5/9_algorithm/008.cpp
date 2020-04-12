#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(){
    int num[]={1,2,3,4,5,6};
    int *low=lower_bound(num,num+sizeof(num)/4,0);
    int *up=upper_bound(num,num+sizeof(num)/4,0);
    printf("%d %d\n",low-num,up-num);
    low=lower_bound(num,num+sizeof(num)/4,1);
    up=upper_bound(num,num+sizeof(num)/4,1);
    printf("%d %d\n",low-num,up-num);
    system("pause");
    return 0;
}