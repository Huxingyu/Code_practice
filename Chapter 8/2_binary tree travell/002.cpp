//中序遍历

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

void midorder(node* root){
    if(root==NULL){
        return;
    }
    midorder(root->lchild);
    printf("%d ",root->data);
    midorder(root->rchild);
}