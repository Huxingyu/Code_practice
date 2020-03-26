#include <stdio.h>
#include <stdlib.h>
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
    generate(1);
    printf("%d\n",count);
    system("pause");
    return 0;
}

//n皇后问题