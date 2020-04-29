#include <stdio.h>
#include <stdlib.h>
#define max 10

struct node{
    int data;
    node* lchild;
    node* rchild;
}Node[max];

node* newNode(int x){
    node* root=new node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    return root;
}

//search
void search(node* root,int x){
    if(root==NULL){
        return;
    }
    if(root->data==x){
        printf("%d ",root->data);
        return;
    }
    if(root->data>x){
        search(root->lchild,x);
    }else{
        search(root->rchild,x);
    }
}

//insert
void insert(node* root,int x){
    if(root==NULL){
        root=newNode(x);
        return;
    }
    if(root->data>x){
        insert(root->lchild,x);
    }else{
        insert(root->rchild,x);
    }
}

//creat
node* creat(int num[]){
    node* root=NULL;
    int n=sizeof(num);
    for(int i=0;i<n;i++){
        insert(root,num[i]);
    }
    return root;
}