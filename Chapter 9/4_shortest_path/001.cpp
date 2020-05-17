#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define max 10

using namespace std;

int a[max];
int n,g[max][max];
bool visit[max]={false};
int INF=0x3fffffff;

void D(){
    fill(a,a+max,INF);
    a[0]=0;
    for(int i=0;i<n;i++){
        int u=-1;
        int MIN=INF;
        for(int j=0;j<n;j++){
            if(visit[j]==false && a[j]<MIN){
                u=j;
                MIN=a[j];
            }
        }
        if(u==-1){
            return;
        }
        for(int v=0;v<n;v++){
            if(visit[v]==0 && g[u][v]!=INF && a[u]+g[u][v]<a[v]){
                a[v]=a[u]+g[u][v];
            }
        }
    }
}