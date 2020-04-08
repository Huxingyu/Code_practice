#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 100

int pnum=0,fnum=0,prime[max];
bool xprime[max]={0};       //布尔数组

struct faction{
    int fac,num;
}fac[10];

void is_prime(){
    for(int i=2;i<max;i++){
        if(xprime[i]==false){
            prime[pnum++]=i;
            for(int j=i+i;j<max;j+=i){
                xprime[j]=true;
            }
        }
    }
}

void cal_prime(int x){
    if(x==1){
        printf("1");
    }
    int sqr=(int)sqrt(1.0*x);
    for(int i=0;i<pnum && prime[i]<sqr;i++){
        if(x%prime[i]==0){
            fac[fnum].fac=prime[i];
            fac[fnum].num=0;
            while(x%prime[i]==0){
                fac[i].num++;
                x/=prime[i];
            }
            fnum++;
        }
    }
    if(x!=1){
        fac[fnum].fac=x;
        fac[fnum++].num=1;
    }
}

int main(){
    is_prime();
    int x;
    while(scanf("%d",&x)!=EOF){
        cal_prime(x);
        for(int i=0;i<fnum;i++){
            printf("%d^%d",fac[i].fac,fac[i].num);
            if(i<fnum-1){
                printf("*");
            }
        }
    }
    system("pause");
    return 0;
}