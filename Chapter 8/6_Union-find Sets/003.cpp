#include <stdio.h>
#include <stdlib.h>
#define max 10

int num[max];

int find_father(int x){
    while(x!=num[x]){
        x=num[x];
    }
    return x;
}

int main(){
    for(int i=0;i<max-1;i++){
        num[i]=i+1;
    }
    num[max-1]=max-1;
    for(int i=0;i<max;i++){
        printf("num[%d]=%d\n",i,num[i]);
    }
    //----------------------------------
    int ans=find_father(2);
    printf("%d\n",ans);
    system("pause");
    return 0;
}