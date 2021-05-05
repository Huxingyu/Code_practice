#include <iostream>
#include <cstdlib>

using namespace std;

struct treeNode{
    public:
        int data;
        treeNode *left;
        treeNode *right;
        treeNode():data(0),left(nullptr),right(nullptr){}
        treeNode(int x):data(x),left(nullptr),right(nullptr){}
        treeNode(int x,treeNode *left,treeNode *right):data(x),left(left),right(right){}
};

treeNode* newNode(int x){
    treeNode* node=new treeNode;
    node->data=x;
    node->left=node->right=nullptr;
    return node;
}

void search(treeNode* root,int x,int new_data){
    if(root==nullptr){
        return;
    }
    if(root->data==x){
        root->data=new_data;
        return;
    }else if(root->data>x){
        search(root->left,x,new_data);
    }else{
        search(root->right,x,new_data);
    }
    
}

void insert(treeNode* root,int x){
    if(root==nullptr){
        root=newNode(x);
        return;
    }
    if(root->data==x){
        cout<<"already exist"<<endl;
    }else if(root->data>x){
        insert(root->left,x);
    }else{
        insert(root->right,x);
    }
}

treeNode* creat(int nums[],int n){
    treeNode* root=nullptr;
    for(int i=0;i<n;i++){
        insert(root,nums[i]);
    }
    return root;
}

//delete function

int main(){}