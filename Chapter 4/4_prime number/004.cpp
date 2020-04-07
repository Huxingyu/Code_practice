#include <stdio.h>
#include <stdlib.h>
#define max 10000

int num=0,prime[max];
bool is_prime[max]={0};

void cal_prime(int n){
    for(int i=2;i<max;i++){
        if(is_prime[i]==false){             //判断条件
            prime[num++]=i;
            for(int j=i+i;j<max;j+=i){
                is_prime[j]=true;
            }
        }
        if(num>n){
            break;
        }
    }
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    cal_prime(n);
    for(int i=m-1;i<n;i++){
        printf("%d ",prime[i]);
    }
    system("pause");
    return 0;
}