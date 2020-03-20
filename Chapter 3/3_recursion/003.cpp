#include <stdio.h>
#include <stdlib.h>

const int  max = 4;

int n,p[max],hashtable[max]={false}; 

void generate(int index){
    if(index==n+1){
        for(int i=1;i<=n;i++){
            printf("%d",p[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++){
        if(hashtable[i]==false){
            p[index]=i;
            hashtable[i]=true;
            generate(index+1);     //return to this
            hashtable[i]=false;
        }
    }
}

int main(){
    n=2;
    generate(1);
    system("pause");
    return 0;
}