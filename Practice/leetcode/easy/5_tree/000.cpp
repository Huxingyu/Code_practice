#include <iostream>
#include <cstdlib>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x,TreeNode *left,TreeNode *right):val(x),left(left),right(right){}
};

TreeNode* newNode(int x){
    TreeNode *node=new TreeNode;
    node->val=x;
    node->left=node->right=nullptr;
    return node;
}

void search(TreeNode *root,int x,int new_data){
    if(root==nullptr){
        return;
    }
    if(root->val==x){
        root->val=new_data;
    }
    search(root->left,x,new_data);
    search(root->right,x,new_data);
}

void insert(TreeNode *&root,int x){
    //must care that
    if(root==nullptr){
        root=new TreeNode(x);
        return;
    }
    if(true){
        insert(root->left,x);
    }else{
        insert(root->right,x);
    }
}

TreeNode* creat(){
    TreeNode *root=new TreeNode;
    for(int i=0;i<5;i++){
        insert(root,i);
    }
    return root;
}

int main(){

    system("pause");
    return 0;
}