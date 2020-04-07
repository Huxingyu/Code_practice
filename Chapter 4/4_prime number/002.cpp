#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 101

int num=0,prime[max];

bool isprime(int x){
    if(x<=1){
        return false;
    }
    int y=(int)sqrt(1.0*x);
    for(int i=2;i<=y;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

void cal_prime(){
    for(int i=1;i<max;i++){
        if(isprime(i)){
            prime[num++]=i;
        }
    }
}

int main(){
    cal_prime();
    for(int i=0;i<num;i++){
        printf("%d ",prime[i]);
    }
    system("pause");
    return 0;
}