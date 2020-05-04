//并查集解决[复杂关系问题]

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

int find_father(int x){
    while(x!=num[x]){
        x=num[x];
    }
    //路径压缩优化
    return x;
}

void union_set(int x,int y){
    int a=find_father(x);
    int b=find_father(y);
    if(a!=b){
        num[a]=b;
    }
}

int main(){
    int a,b,ans=0;
    scanf("%d %d",&n,&m);
    init();
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        union_set(a,b);
    }
    for(int i=0;i<n;i++){
        is_right[find_father(i)]=true;
        printf("%d ",is_right[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        ans+=is_right[i];
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}