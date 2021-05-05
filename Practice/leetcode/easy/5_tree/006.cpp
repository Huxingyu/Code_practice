//897. Increasing Order Search Tree

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

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
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans=new TreeNode;
        inorder(root,ans);
        return ans->right;
    }  
    void inorder(TreeNode* root,TreeNode*& ans){
        if(root==nullptr){
            return;
        }
        inorder(root->left,ans);
        ans->right=new TreeNode(root->val);
        ans=ans->right;
        inorder(root->right,ans);
    }
};