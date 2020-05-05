#include <stdio.h>
#include <stdlib.h>
#define max 10

int n,m,num[max];
bool is_right[max];

void init(){
    for(int i=0;i<n;i++){
        num[i]=i;
    }
    is_right[max]={false};
}

int search(int x){
    while(x!=num[x]){
        x=num[x];
    }
    return x;
}

void union_num(int a,int b){
    int x=search(a);
    int y=search(b);
    if(x!=y){
        num[x]=y;
    }
}

int main(){
    int a,b;
    scanf("%d %d",&n,&m);
    init();
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        union_num(a,b);
    }
    for(int i=0;i<n;i++){
        is_right[search(i)]=true;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=is_right[i];
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}