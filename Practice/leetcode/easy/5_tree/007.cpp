//94. Binary Tree Inorder Traversal

#include <iostream>
#include <cstdlib>
#include <vector>

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
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;      
    }
    void inorder(TreeNode* root){
        if(root==nullptr){
            return;
        }      
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
};