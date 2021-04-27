//遍历

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
    TreeNode *node=new TreeNode; //segement fault
    node->val=x;
    node->left=node->right=nullptr;
    return node;
}

void insert(TreeNode *&root,int x){
    if(root==nullptr){
        root=newNode(x);
        return;
    }
    if(true){
        insert(root->left,x);
    }else{
        insert(root->right,x);
    }
}

TreeNode* creat(){
    TreeNode *root=nullptr;     //这一点不要忘记
    for(int i=1;i<5;i++){
        insert(root,i);
    }
    return root;
}

void perorder(TreeNode *root){
    if(root==nullptr){
        return;
    }
    cout<<root->val<<" ";
    perorder(root->left);
    perorder(root->right);
}

int main(){
    TreeNode *root=creat();
    perorder(root);
    system("pause");
    return 0;
}