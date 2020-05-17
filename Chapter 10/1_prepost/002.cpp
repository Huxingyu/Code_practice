#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#define max 10000

using namespace std;

typedef long long ll;

int a[max];

ll fab(int x){
    if(x==1 || x==2){
        return 1;
    }
    if(a[x]!=-1){
        return a[x];
    }
    else{
        a[x]=fab(x-1)+fab(x-2);
        return a[x];
    }
}

int main(){
    int x;
    clock_t start,finish;
    fill(a,a+max,-1);
    scanf("%d",&x);
    start=clock();
    printf("%lld\n",fab(x));
    finish=clock();
    printf("%f\n",(double)(finish-start)/CLOCKS_PER_SEC);
    system("pause");
    return 0;
}