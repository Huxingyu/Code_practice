#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <vector>
#define max 10

using namespace std;

struct node{
    int data;
    int layer;
    vector<int> child;
}Node[max];

void creat(int root){
    Node[root].layer=0;
    queue<int> q;
    q.push(root);
    while(q.empty()!=true){
        int top=q.front();
        q.pop();
        for(int i=0;i<Node[root].child.size();i++){
            int child=Node[root].child[i];
            Node[child].layer=Node[root].layer+1;
            q.push(child);
        }       
    }
}