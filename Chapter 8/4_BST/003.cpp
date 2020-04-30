//二叉查找树的中序遍历

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* lchild;
    node* rchild;
};

node* newNode(int x){
    node* root=new node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    return root;
}

void insert(node* &root,int x){
    if(root==NULL){
        root=newNode(x);
        return;
    }
    if(root->data==x){
        return;
    }else if(root->data>x){
        insert(root->lchild,x);
    }else{
        insert(root->rchild,x);
    }
}

node* creat(int num[]){
    node* root=NULL;
    int n=sizeof(num)/4;
    for(int i=0;i<n;i++){
        insert(root,num[i]);
    }
    return root;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->lchild);      //只访问
    printf("%d\n",root->data);
    inorder(root->rchild);
}

int main(){
    int num[10];
    for(int i=0;i<10;i++){
        num[i]=i;
    }
    node* root=creat(num);
    inorder(root);
    system("pause");
    return 0;
}