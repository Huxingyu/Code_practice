//fuck fuck fuck

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define max 10

using namespace std;

int n,m,s;
int INF=0x3fffffff;
int a[max],g[max][max];
bool visit[max]={false};

void Dijkstra(int s){
    fill(a,a+max,INF);
    a[0]=0;
    for(int i=0;i<n;i++){
        int u=-1,MIN=INF;
        for(int j=0;j<n;j++){
            if(visit[j]==false && a[j]<MIN){
                u=j;
                MIN=a[j];
            }
        }
        if(u==-1){
            return;
        }
        visit[u]=true;
        for(int v=0;v<n;v++){
            if(visit[v]==false && g[u][v]!=INF && a[u]+g[u][v]<a[v]){
                a[v]=a[u]+g[u][v];
            }
        }
    }
}

int main(){
    int u,v,w;
    scanf("%d %d %d",&n,&m,&s);
    fill(g[0],g[0]+max*max,INF);
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&u,&v,&w);
        g[u][v]=w;
    }
    Dijkstra(s);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}