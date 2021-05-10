//101. Symmetric Tree

#include <iostream>
#include <cstdlib>

using namespace std;

struct TreeNode{
    public:
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode():val(0),left(nullptr),right(nullptr){}
        TreeNode(int x,TreeNode *left,TreeNode *right):val(x),left(left),right(right){}
};

class Solution {
    public:
        bool isSymmetric(TreeNode* root) {
            bool ans=order(root->left,root->right);
            return ans;
        }
        bool order(TreeNode* l_root,TreeNode* r_root){
            if(l_root==nullptr && r_root==nullptr){
                return true;
            }
            if(l_root==nullptr || r_root==nullptr){
                return false;
            }
            if(l_root->val!=r_root->val){
                return false;
            }
            return order(l_root->left,r_root->right) && order(l_root->right,r_root->left); 
        }
};