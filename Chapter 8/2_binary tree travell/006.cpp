//rebuild  binary-tree

#include <stdio.h>
#include <stdlib.h>
#define max 10

struct node{
    int data;
    node* lchild;
    node* rchild;
};

int pre[max],in[max];
//(preL,preR)(inL,inR)

node* creat(int preL,int preR,int inL,int inR){
    if(preL>preR){
        return NULL;
    }
    node* root=new node;
    root->data=pre[preL];
    int k;
    for(int k=inL;k<=inR;k++){
        if(in[k]==pre[preL]){
            break;
        }
    }
    int numleft=k-inL;
    root->lchild=creat(preL+1,preL+numleft,inL,inL+numleft-1);
    root->rchild=creat(preL+numleft+1,preR,inL+numleft+1,inR);
    return root;
}

