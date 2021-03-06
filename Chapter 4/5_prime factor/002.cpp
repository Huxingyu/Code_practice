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

void cal_frac(int x){
    int y=(int)sqrt(1.0*x);
    for(int i=0;i<pNum && prime[i]<y;i++){
        if(x%prime[i]==0){
            ans[fNum].fra=prime[i];
            ans[fNum].num=0;
            while(x%prime[i]==0){
                ans[fNum].num++;
                x/=prime[i];
            }
            fNum++;
        }
    }
    if(x!=1){
        ans[fNum].fra=x;
        ans[fNum].num=1;
    }
}

int main(){
    cal_prime();
    cal_frac(10);
    for(int i=0;i<fNum;i++){
        printf("%d*%d\n",ans[i].fra,ans[i].num);
    }
    system("pause");
    return 0;
}