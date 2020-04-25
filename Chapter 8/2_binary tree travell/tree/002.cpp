#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define max 10

using namespace std;

struct node{
    int data;
    int lchild;
    int rchild;
}Node[max];

int index=0;

int nodeNew(int x){
    Node[index].data=x;
    Node[index].lchild=-1;
    Node[index].rchild=-1;
    return index+1;         //why +1?    
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

void insert(int &root,int x){
    if(root==-1){
        root=nodeNew(x);
        return;
    }
    insert(Node[root].lchild,x);
    insert(Node[root].rchild,x);
}

int creat(int num[]){
    int n=sizeof(num);
    int root=-1;
    for(int i=0;i<n;i++){
        insert(root,num[i]);
    }
    return root;
}

//preorder
void preorder(int root){
    if(root==-1){
        return;
    }
    printf("%d ",Node[root].data);
    preorder(Node[root].lchild);
    preorder(Node[root].rchild);
}

//inorder
void inorder(int root){
    if(root==-1){
        return;
    }
    inorder(Node[root].lchild);
    printf("%d ",Node[root].data);
    inorder(Node[root].rchild);
}

//postorder
void postorder(int root){
    if(root==-1){
        return;
    }
    postorder(Node[root].lchild);
    postorder(Node[root].rchild);
    printf("%d ",Node[root].data);
}

//layerorder
void layerorder(int root){
    queue<int> q;           // no node，only int
    q.push(root);
    while(q.empty()!=true){
        int top=q.front();
        q.pop();
        printf("% ",Node[top].data);
        if(Node[top].lchild!=-1){
            q.push(Node[top].lchild);
        }
        if(Node[top].rchild!=-1){
            q.push(Node[top].rchild);
        }
    }
}