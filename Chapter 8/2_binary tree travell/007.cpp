#include <stdio.h>
#include <stdlib.h>
#include <queue>
#define max 10

using namespace std;

int n,inorder[max],postorder[max];

struct node{
    int data;
    node* lchild;
    node* rchild;
};

//(postL,postR)(inL,inR)
node* creat(int postL,int postR,int inL,int inR){
    if(postL>postR){
        return NULL;
    }
    int k;
    node* root=new node;
    root->data=postorder[postR];
    for(k=inL;k<inR;k++){
        if(inorder[k]==postorder[postR]){
            break;
        }
    }
    int numleft=k-inL;
    root->lchild=creat(postL,postL+numleft-1,inL,k-1);
    root->rchild=creat(postL+numleft,postR-1,k+1,inR);
    return root;
}

void BFS(node* root){
    queue<node*> q;
    q.push(root);
    while(q.empty()!=true){
        node* top=q.front();
        q.pop();
        printf("%d ",top->data);
        if(top->lchild!=NULL){
            q.push(top->lchild);
        }
        if(top->rchild!=NULL){
            q.push(top->rchild);
        }
    }
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&postorder[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&inorder[i]);
    }
    node* root=creat(0,n-1,0,n-1);
    BFS(root);
    system("pause");
    return 0;
}