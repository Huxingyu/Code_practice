#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define max 10

using namespace std;

int inf=-1;
int n,g[max][max];
bool inq[max]={false};

void BFS(int x){
    queue<int> q;
    q.push(x);
    inq[x]=true;
    while(q.empty()!=true){
        int top=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(inq[i]==false && g[top][i]>0){
                inq[i]=true;
                BFS(i);
            }
        }
    }
}

void DFS_trave(){
    for(int i=0;i<n;i++){
        if(inq[i]==false){
            BFS(i);
        }
    }
}