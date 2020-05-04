#include <stdio.h>
#include <stdlib.h>

int father[10];

int search(int x){
    while(x==father[x]){
        x=father[x];
    }
    return x;
}

void hebing(int a,int b){
    int f1=search(a);
    int f2=search(b);
    if(f1!=f2){
        father[f1]=f2;      //合并
    }
}

int main(){
    for(int i=0;i<10;i++){
        father[i]=i;
    }
    return 0;
}