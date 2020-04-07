#include <stdio.h>
#include <stdlib.h>
#define max 101

int num=0,prime[max];
bool is_prime[max]={0};

void cal_prime(){
    for(int i=2;i<max;i++){
        if(is_prime[i]==0){
            prime[num++]=i;
            for(int j=i+i;j<max;j+=i){
                is_prime[j]=true;
            }
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