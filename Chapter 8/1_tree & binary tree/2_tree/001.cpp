#include <stdio.h>
#include <stdlib.h>

//二叉树的数据定义，用链表定义
struct node{
    int data;
    node *lchild;
    node *rchild;
}; 

//二叉树未定义前结点
node* root=NULL;

//新建结点
node* newNode(int x){
    node* root=new node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    return root;
}

//二叉查找树的搜索、修改
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