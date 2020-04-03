#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n,x,y,temp,num[4];

bool cmp(int n,int x){
    return n<x;
}

int cal(int n){
    num[0]=n/1000;
    num[1]=n/100%10;
    num[2]=n/10%10;
    num[3]=n%10;
    sort(num,num+4,cmp);
    x=num[0]*1000+num[1]*100+num[2]*10+num[3]*1;
    y=num[3]*1000+num[2]*100+num[1]*10+num[0]*1;
    return x,y;
}

void mian_cal(int x,int y){
    while(temp!=6174){
        temp=y-x;
        printf("%d-%d=%d",y,x,temp);
        x,y=cal(temp);
    }
}

int main(){
    n=1024;
    int x,y=cal(n);
    mian_cal(x,y);
    system("pause");
    return 0;
}