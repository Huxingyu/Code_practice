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

int get_balance_facor(node* root){
    return get_height(root->lchild)-get_height(root->rchild);
}

int update_height(node* root){
    return max(get_height(root->lchild),get_height(root->rchild));
}

void L(node* root){
    node* temp=root->rchild;
    root->rchild=temp->lchild;
    temp->lchild=root;
    update_height(root);
    update_height(temp);
    root=temp;
}

void R(node* root){
    node* temp=root->lchild;
    root->lchild=temp->rchild;
    temp->rchild=root;
    update_height(root);
    update_height(temp);
    root=temp;
}

void insert(node* &root,int x){
    if(root==NULL){
        root=newNode(x);
        return;
    }
    if(root->data>x){
        insert(root->lchild,x);
        update_height(root);
        if(get_balance_facor(root)==2){     //L
            if(get_balance_facor(root->lchild)==1){    //LL
                R(root);
            }
            else if(get_balance_facor(root->lchild)==-1){   //LR
                L(root->lchild);
                R(root);
            }
        }
    }
    else{
        insert(root->rchild,x);
        update_height(root);
        if(update_height(root)==-2){                //R
            if(update_height(root->rchild)==-1){    //RR
                L(root);
            }
            else if(update_height(root->rchild)==1){
                R(root->rchild);
                L(root);
            }
        }
    }
}

node* creat(node* root,int num[]){
    node* root=NULL;
    int n=sizeof(num)/4;
    for(int i=0;i<n;i++){
        insert(root,num[i]);
    }
    return root;
}