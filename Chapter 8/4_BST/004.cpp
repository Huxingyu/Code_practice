//PAT A1043
//这道题目（内存/&）用的很活，学习到了

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#define max 10

using namespace std;

struct node{
    int data;
    node* lchild;
    node* rchild;
};

void insert(node* &root,int x){
    if(root==NULL){
        root=new node;      //e1-非法的内存访问
        root->data=x;
        root->lchild=root->rchild=NULL;
        return;
    }
    if(root->data>x){
        insert(root->lchild,x);
    }else{
        insert(root->rchild,x);
    }
}

void preorder(node* root,vector<int> &vt){
    if(root==NULL){
        return;
    }
    vt.push_back(root->data);
    preorder(root->lchild,vt);
    preorder(root->rchild,vt);
}

void preorderM(node* root,vector<int> &vt){
    if(root==NULL){
        return;
    }
    vt.push_back(root->data);
    preorderM(root->rchild,vt);
    preorderM(root->lchild,vt);
}

void postorder(node* root,vector<int> &vt){
    if(root==NULL){
        return;
    }
    postorder(root->lchild,vt);
    postorder(root->rchild,vt);
    vt.push_back(root->data);
}

void postorderM(node* root,vector<int> &vt){
    if(root==NULL){
        return;
    }
    postorderM(root->rchild,vt);
    postorderM(root->lchild,vt);
    vt.push_back(root->data);
}

vector<int> origin,pre,preM,post,postM;

int main(){
    int n,data;
    node* root=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        origin.push_back(data);
        insert(root,data);
    }
    preorder(root,pre);
    preorderM(root,preM);
    postorder(root,post);
    postorderM(root,postM);
    if(origin==pre){
        printf("yes\n");
        for(int i=0;i<post.size();i++){
            printf("%d ",post[i]);
        }
    }else if(origin==preM){
        printf("yes\n");
        for(int i=0;i<postM.size();i++){
            printf("%d ",postM[i]);
        }
    }else{
        printf("no");
    }
    system("pause");
    return 0;
}