//the static of binary tree

#include <stdio.h>
#include <stdlib.h>
#define max 10

struct node{
    int data;
    int lchild;
    int rchild;
}Node[max];

int index=0;

int newNode(int x){
    Node[index].data=x;
    Node[index].lchild=-1;
    Node[index].rchild=-1;
    return index++;             //self-plus
}

void search(int root,int x,int new_data){
    if(root==-1){
        return;
    }
    if(Node[root].data==x){
        Node[root].data=new_data;
    }
    search(Node[root].lchild,x,new_data);
    search(Node[root].rchild,x,new_data);
}

void insert(int root,int x){
    if(root==-1){
        root=newNode(x);
        return;
    }
    insert(Node[root].lchild,x);
    insert(Node[root].rchild,x);
}