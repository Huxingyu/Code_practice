#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

node* newNode(int x){
    node* root=new node;
    root->data=x;
    root->lchild=root->rchild=NULL;
}

void search(node* root,int x){
    int i=0;
    if(root==NULL){
        printf("search fail");
        return;
    }
    if(root->data==x){
        printf("%d %d\n",++i,root->data);
    }
    else if(root->data>x){
        search(root->lchild,x);
    }
    else{
        search(root->rchild,x);
    }
}

void insert(node* root,int x){
    if(root==NULL){
        root==newNode(x);
    }
    if(root->data==x){
        printf("already exist");
    }else if(root->data>x){
        insert(root->lchild,x);
    }else{
        insert(root->rchild,x);
    }
}

node* creat(int num[]){
    node* root=NULL;
    int n=sizeof(num)/4;
    for(int i=0;i<n;i++){
        insert(root,num[i]);
    }
    return root;
}

node* find_max(node* root){
    while(root->rchild!=NULL){
        root=root->rchild;
    }
    return root;
}

node* find_min(node* root){
    while(root->lchild!=NULL){
        root=root->lchild;
    }
    return root;
}

void deletNode(node* &root,int x){
    if(root==NULL){
        return;
    }
    if(root->data==x){
        if(root->lchild==root->rchild==NULL){
            root=NULL;
        }
        else if(root->lchild!=NULL){
            node* temp=find_max(root->lchild);
            root->data=temp->data;
            deletNode(root->lchild,temp->data);
        }
        else{
            node* temp=find_min(root->rchild);
            root->data=temp->data;
            deletNode(root->rchild,temp->data);
        }
    }
    if(root->data>x){
        deletNode(root->lchild,x);
    }
    if(root->data<x){
        deletNode(root->rchild,x);
    }
}
