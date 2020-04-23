//先序遍历

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

void preorder(node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}