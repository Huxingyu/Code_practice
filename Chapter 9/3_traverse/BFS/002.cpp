#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <vector>
#define max 10

using namespace std;

int n,g[max][max];
bool inq[max]={false};
vector<int> vt[max];

void BFS(int x){
    queue<int> q;
    q.push(x);
    inq[x]=true;
    while(q.empty()!=true){
        int top=q.front();
        q.pop();
        for(int i=0;i<vt[top].size();i++){
            int temp=vt[top][i];
            if(inq[temp]==false){
                q.push(temp);
                inq[temp]=true;
            }
        }
    }
}

void BFS_trave(){
    for(int i=0;i<n;i++){
        if(inq[i]==false){
            BFS(i);
        }
    }
}