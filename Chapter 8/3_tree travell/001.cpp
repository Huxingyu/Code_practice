#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
#define max 10

using namespace std;

struct node{
    int data;
    vector<int> child;
}Node[max];

int index=0;

int newNode(int x){
    Node[index].data=x;
    Node[index].child.clear();
    return index++;
}

//preorder
void preorder(int root){
    printf("%d ",Node[root].data);
    for(int i=0;i<Node[root].child.size();i++){
        preorder(Node[root].child[i]);
    }
}

//layerorder
void layerorder(int root){
    queue<int> q;
    q.push(root);
    while(q.empty()!=true){
        int top=q.front();
        q.pop();
        printf("%d ",Node[top].data);
        for(int i=0;i<Node[top].child.size();i++){
            q.push(Node[top].child[i]);
        }
    }
}