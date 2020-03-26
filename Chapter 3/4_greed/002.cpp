#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

struct mooncake{
    int store;
    int sell;
    double price;
}cake[10];

bool cmp(mooncake x,mooncake y){
    return x.price>y.price;
}

int n,D;
double ans=0;

int main(){
    scanf("%d %d",&n,&D);
    for(int i=0;i<n;i++){
        scanf("%d",&cake[i].store);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&cake[i].sell);
        cake[i].price = (double)cake[i].sell/cake[i].store;
    }
    sort(cake,cake+n,cmp);
    for(int i=0;i<n;i++){
        if(cake[i].store<=D){
            D -= cake[i].store;
            ans += cake[i].sell;
        }
        else{
            ans += cake[i].price * D;
            break;      //勿忘在循环中，满足条件结束循环
        }
    }
    printf("%.3f\n",ans);
    system("pause");
    return 0;
}