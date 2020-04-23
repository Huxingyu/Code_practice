//后序遍历

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d ",root->data);
}