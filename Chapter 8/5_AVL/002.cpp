#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    int height;
    node* lchild;
    node* rchild;
};

node* newNode(int x){
    node* root=new node;
    root->data=x;
    root->height=1;
    root->lchild=root->rchild=NULL;
    return root;
}

void search(node* root,int x){
    if(root==NULL){
        return;
    }
    if(root->data==x){
        printf("%d\n",root->data);
    }else if(root->data>x){
        search(root->lchild,x);
    }else{
        search(root->rchild,x);
    }
}