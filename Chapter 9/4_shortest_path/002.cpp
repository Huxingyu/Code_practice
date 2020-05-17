#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#define max 10

using namespace std;

struct Node{
    int v,dis;
};

int n,a[max];
int INF=0x3fffffff;
vector<Node> vt[max];
bool visit[max]={false};

void D(){
    fill(a,a+max,INF);
    a[0]=0;
    for(int i=0;i<n;i++){
        int u=-1;
        int MIN=INF;
        for(int j=0;j<n;j++){
            if(visit[j]==false && a[j]<INF){
                u=j;
                MIN=a[j];
            }
        }
        if(u=-1){
            return;
        }
        visit[u]=true;
        for(int j=0;j<vt[u].size();j++){
            int v=vt[u][j].v;
            if(visit[v]==false && a[u]+vt[u][j].dis<a[v]){
                a[v]=a[u]+vt[u][j].dis;
            }
        }
    }
}

