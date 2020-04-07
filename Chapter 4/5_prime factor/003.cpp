#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 100001

int pNum=0,fNum=0,prime[max];
bool is_prime[max]={0};

struct frac{
    int fra,num;
}ans[10];

void cal_prime(){
    for(int i=2;i<max;i++){
        if(is_prime[i]==false){
            prime[pNum++]=i;
            for(int j=i+i;j<max;j+=i){
                is_prime[j]=true;
            }
        }
    }
}

void cal_frac(int n){
    int y=(int)sqrt(1.0*n);
    for(int i=0;i<pNum && prime[i]<=y;i++){     //e1
        if(n%prime[i]==0){
            ans[fNum].fra=prime[i];
            ans[fNum].num=0;
            while(n%prime[i]==0){               //e3
                ans[fNum].num++;
                n/=prime[i];
            }
            fNum++;
        }
        if(n==1){
            break;
        }
    }
    if(n!=1){
        ans[fNum].fra=n;
        ans[fNum++].num=1;          //e2
    }
}

int main(){
    cal_prime();
    cal_frac(1);
    for(int i=0;i<fNum;i++){
        printf("%d^%d",ans[i].fra,ans[i].num);
        if(i<fNum-1){
            printf("*");
        }
    }
    printf("\n");
    system("pause");
    return 0;
}