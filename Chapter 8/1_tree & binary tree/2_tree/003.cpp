#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

node* newNode(int x){
    node* temp=new node;
    temp->data=x;
    temp->lchild=temp->rchild=NULL;
    return temp;
}

void insert(node* &root,int x){
    if(root==NULL){
        root=newNode(x);
        return;
    }
    if(1){
        insert(root->lchild,x);
    }else{
        insert(root->rchild,x);
    }
}

node* creat(int num[]){
    int n=sizeof(num)/4;
    node* root=NULL;    //新建空根节点
    for(int i=0;i<n;i++){
        insert(root,num[i]);
    }
    return root;
}