//邻接表-结构体

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
#define max 10

using namespace std;

struct node{
    int data,layer;
};

int n,g[max][max];
bool inq[max]={false};
vector<node> vt[max];

void BFS(int x){
    queue<node> q;
    node start;         //为什么不用new
    start.data=x;
    start.layer=0;
    q.push(start);
    inq[start.data]=true;
    while(q.empty()!=true){
        node top=q.front();
        q.pop();
        for(int i=0;i<vt[top.data].size();i++){
            node next=vt[top.data][i];
            next.layer=top.layer+1;
            if(inq[next.data]==false){
                q.push(next);
                inq[next.data]=true;
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