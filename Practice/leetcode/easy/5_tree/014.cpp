//144. Binary Tree Preorder Traversal

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
        TreeNode(int x,TreeNode *left,TreeNode *right):val(x),left(left),right(right){}
};

class Solution {
    private:
        vector<int> ans;
    public:
        vector<int> preorderTraversal(TreeNode* root) {
            preorder(root);
            return ans;
        }
        void preorder(TreeNode* root){
            if(root==nullptr){
                return;
            }
            ans.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
};