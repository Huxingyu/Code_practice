//897. Increasing Order Search Tree

#include <iostream>
#include <cstdlib>

using namespace std;

struct TreeNode{
    public:
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode():val(0),left(nullptr),right(nullptr){}
        TreeNode(int x):val(x),left(nullptr),right(nullptr){}
        TreeNode(int x,TreeNode *left,TreeNode *right):val(x),left(left),right(right){}
};

class Solution {
private:
    TreeNode* temp=nullptr;
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans=new TreeNode;
        temp=ans;
        inorder(root);
        return ans->right;
    }
    void inorder(TreeNode* root){          //为什么引用造成无限循环？
        if(root==nullptr){
            return;
        }
        inorder(root->left);
        root->left=nullptr;
        temp->right=root;
        temp=temp->right;
        inorder(root->right);
    }
};