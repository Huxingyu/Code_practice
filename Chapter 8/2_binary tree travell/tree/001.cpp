//rebuilt tree (Chapter 8-1_2)

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

//新建
node* newNode(int x){
    node* Node=new node;
    Node->data=x;
    Node->lchild=Node->rchild=NULL;
    return Node;
}

//查找、修改
void search(node* root,int x,int new_data){
    if(root==NULL){
        return;
    }
    if(root->data==x){
        root->data=new_data;
    }
    search(root->lchild,x,new_data);
    search(root->rchild,x,new_data);
}

//插入
void insert(node* root,int x){
    if(root==NULL){
        node* new_node=newNode(x);
        root=new_node;
        return;             //dont forget [return]
    }
    insert(root->lchild,x);
    insert(root->rchild,x);
}

//创建
node* creat(int num[],int n){
    node* root=NULL;
    for(int i=0;i<n;i++){
        insert(root,num[i]);
    }
    return root;
}