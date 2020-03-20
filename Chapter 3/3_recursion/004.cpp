#include <stdio.h>
#include <stdlib.h>
#define max 10

int n,num[max],p[max]={false};

void generate(int index){
    if(index==n+1){         //递归边界
        for(int i=1;i<=n;i++){
            printf("%d",num[i]);
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){      //[14-21]递归式
        if(p[i]==false){
            num[index]=i;
            p[i]=true;
            generate(index+1);
            p[i]=false;
        }
    }
}

int main(){
    n=4;
    generate(1);
    system("pause");
    return 0;    
}

//多写两遍