//145. Binary Tree Postorder Traversal

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
        vector<int> postorderTraversal(TreeNode* root) {
            postorder(root);
            return ans;
        }
        void postorder(TreeNode* root){
            if(root==nullptr){
                return;
            }
            postorder(root->left);
            postorder(root->right);
            ans.push_back(root->val);
        }
};