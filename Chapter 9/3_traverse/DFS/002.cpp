//邻接表

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#define max 10

using namespace std;

vector<int> node[max];
int n,inf=-1;
bool inq[max]={false};

void DFS(int u,int index){
    inq[u]=true;
    for(int i=0;i<node[u].size();i++){
        int v=node[u][i];
        if(inq[v]==false){
            DFS(v,index+1);
        }
    }
}
void DFS_trave(){
    for(int u=0;u<n;u++){
        if(inq[u]==false){
            DFS(u,1);
        }
    }
}