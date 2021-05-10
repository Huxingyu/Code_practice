//965. Univalued Binary Tree

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
        int x;
    public:
        bool isUnivalTree(TreeNode* root) {
            x=root->val;
            return judge(root);
        }  
        bool judge(TreeNode* root){
            if(root==nullptr){
                return true;
            }
            if(root->val!=x){
                return false;
            }
            return judge(root->left) && judge(root->right);
        }
};