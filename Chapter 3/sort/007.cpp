#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){
    return a>b;
}

int main(){
    int x[]={1,2,3,4,7,5,6};
    int y=sizeof(x)/4;
    sort(x,x+7,cmp);
    for(int i=0;i<y;i++){
        printf("%d\n",x[i]);
    }
    system("pause");
    return 0;
}