#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

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

int get_height(node* root){
    if(root==NULL){
        return 0;
    }
    return root->height;
}

int update_height(node* root){
    return max(root->lchild->height,root->rchild->height)+1;
}

void R(node* &root){
    node* temp=root->lchild;
    root->lchild=temp->rchild;
    temp->rchild=root;
    update_height(root);
    update_height(temp);
    root=temp;
}