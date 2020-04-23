#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

struct node{
    int data;
    node* lchild;
    node* rchild;
};

void layerorder(node* root){
    queue<node*> q;
    q.push(root);
    while(q.empty()!=true){
        node* top=q.front();
        q.pop();
        printf("%d\n",top->data);
        if(top->lchild!=NULL){
            q.push(top->lchild);
        }
        if(top->rchild!=NULL){
            q.push(top->rchild);
        }
    }
}