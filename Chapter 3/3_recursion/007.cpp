#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 20

int n,num[max],x[max]={false},count=0;

void generate(int index){
    if(index==n+1){
        bool temp=true;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(abs(i-j)==abs(num[i]-num[j])){
                    temp=false;
                }
            }
        }
        if(temp){
            count++;
        }
    }
    for(int i=1;i<=n;i++){
        if(x[i]==false){
            num[index]=i;
            x[i]=true;
            generate(index+1);
            x[i]=false;
        }
    }
}

int main(){
    n=8;
    clock_t start_time;
    start_time=clock();
    generate(1);
    printf("%f %d\n",(double)(clock()-start_time)/CLOCKS_PER_SEC,count);
    system("pause");
    return 0;
}

//n皇后问题+计时