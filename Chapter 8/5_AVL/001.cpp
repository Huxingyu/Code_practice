#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

struct node{
    int data,height;
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

int getheight(node* root){
    if(root==NULL){
        return 0;
    }
    return root->height;
}

int getbalancefactor(node* root){
    return abs(getheight(root->lchild)-getheight(root->rchild));
}

void updateheight(node* root){
    root->height=max(getheight(root->lchild),getheight(root->rchild))+1;
}