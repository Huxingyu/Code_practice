#include <stdio.h>
#include <stdlib.h>
#define max 100

int num=0,prime[max];
bool is_prime[max]={0};

struct fac{
    int fac,num;
}prime_num[10];

void cal_prime(int n){
    for(int i=2;i<max;i++){
        if(is_prime[i]==false){
            prime[num++]=i;
            for(int j=i+i;j<max;j+=i){
                is_prime[j]=true;
            }
        }
        if(num>=n){
            printf("%d\n",num);
            break;
        }
    }
}

void cal_factor_prime(int x){
    //理解错题意了
}

int main(){
    cal_prime(10);
    for(int i=0;i<num;i++){
        printf("%d ",prime[i]);
    }
    system("pause");
    return 0;
}