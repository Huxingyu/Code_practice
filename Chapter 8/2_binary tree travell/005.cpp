#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

struct node{
    int data;
    int layer;
    node* lchild;
    node* rchild;
};

node* layerorder(node* root){
    queue<node*> q;
    root->layer=1;
    q.push(root);
    while(q.empty()!=true){
        node* top=q.front();
        q.pop();
        printf("%d\n",top->data);
        if(top->lchild!=NULL){
            top->lchild->layer=top->layer+1;
            q.push(top->lchild);
        }
        if(top->rchild!=NULL){
            top->rchild->layer=top->layer+1;
            q.push(top->rchild);
        }
    }
}