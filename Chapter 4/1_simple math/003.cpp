#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n,x,y,temp,num[4];

bool cmp(int x,int y){
    return x>y;
}

void shabi(int n){
    num[0]=n/1000;
    num[1]=n/100%10;
    num[2]=n/10%10;
    num[3]=n%10;
}

int min(){
    sort(num,num+4);
    x=num[0]*1000+num[1]*100+num[2]*10+num[3]*1;
    return x;
}

int max(){
    sort(num,num+4,cmp);
    y=num[0]*1000+num[1]*100+num[2]*10+num[3]*1;
    return y;
}

void mian_cal(int n){
    shabi(n);
    y=max(),x=min();
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