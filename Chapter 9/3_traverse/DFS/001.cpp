//邻接矩阵

#include <stdio.h>
#include <stdlib.h>
#define max 10

int inf=-1;
int n,trave[max][max];
bool inq[max]={false};

void DFS(int u,int index){
    inq[u]=true;
    for(int v=0;v<max;v++){
        if(inq[v]==false && trave[u][v]!=inf){
            DFS(v,index+1);
        }
    }
}

void DFS_trave(){
    for(int u=0;u<max;u++){
        if(inq[u]==false){               //notice
            DFS(u,1);
        }
    }
}