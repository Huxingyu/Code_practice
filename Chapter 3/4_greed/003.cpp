#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int temp,num[11];

int main(){
    for(int i=1;i<11;i++){
        scanf("%d",&num[i]);
    }
    sort(num,num+11,cmp);
    for(int i=1;i<11;i++){
        printf("%d ",num[i]);
    }
    for(int i=1;i<11;i++){
        if(num[i]!=0){
            temp=num[i];
            for(int j=i;j<10;j++){
                num[j]=num[j+1];
            }
            break;
        }
    }
    system("pause");
    return 0;
}


//搞错了