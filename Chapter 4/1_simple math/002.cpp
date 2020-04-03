#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n,x,y,temp,num[4];

bool cmp(int n,int x){
    return n<x;
}

int min(int n){
    num[0]=n/1000;
    num[1]=n/100%10;
    num[2]=n/10%10;
    num[3]=n%10;
    sort(num,num+4,cmp);
    x=num[0]*1000+num[1]*100+num[2]*10+num[3]*1;
    return x;
}

int max(int n){
    num[0]=n/1000;
    num[1]=n/100%10;
    num[2]=n/10%10;
    num[3]=n%10;
    sort(num,num+4,cmp);
    y=num[3]*1000+num[2]*100+num[1]*10+num[0]*1;
    return y;
}

void mian_cal(int n){
    y=max(n),x=min(n);
    while((y-x)!=6174 && (y-x)!=0){
        printf("%d-%d=%d\n",y,x,y-x);
        mian_cal(y-x);
    }
}

int main(){
    n=1024;
    mian_cal(n);
    printf("%d-%d=%d\n",y,x,y-x);
    system("pause");
    return 0;
}