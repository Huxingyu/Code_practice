#include <stdio.h>
#include <stdlib.h>
#define max 20

int n,num[max];
bool x[max]={false};

void generate(int index){
    if(index==n+1){
        for(int i=1;i<=n;i++){
            printf("%d",num[i]);
        }
        printf("\n");
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
    n=4;
    generate(1);
    system("pause");
    return 0;
}

//全排列->N皇后