#include <stdio.h>
#include <stdlib.h>
#define max 100

bool num[max]={false};

int main(){
    int n,m,x;          
    scanf("%d %d",&n,&m);       //error这儿忘了输入了
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        num[x]=true;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        if(num[x]==true){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    system("pause");
    return 0;
}
