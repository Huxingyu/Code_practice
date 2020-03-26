#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int num[11];

int main(){
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    for(int i=1;i<10;i++){
        if(num[i]!=0){
            printf("%d",i);
            num[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<num[i];j++){  //太帅了这个方法
            printf("%d",i);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}