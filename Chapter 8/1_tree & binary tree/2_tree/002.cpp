#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

node* new_node(int x){
    node* Node=new node;
    Node->data=x;
    Node->lchild=Node->rchild=NULL;
    return Node;
}

void insert(node* &root,int x){     //这里需要加&，引用
    if(root==NULL){
        root=new_node(x);
        return;
    }
    if(1){                      //中间的条件代填写
        insert(root->lchild,x);
    }else{
        insert(root->rchild,x);
    }
}