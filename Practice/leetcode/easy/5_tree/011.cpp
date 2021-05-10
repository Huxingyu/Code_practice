//543. Diameter of Binary Tree

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
    int diameterOfBinaryTree(TreeNode* root) {
        int x=0;
        cal(root,x);
        return x;
    }
    int cal(TreeNode* root,int& x){
        if(root==nullptr){
            return 0;
        }
        int left=cal(root->left,x);
        int right=cal(root->right,x);
        x=max(x,left+right);
        return max(left,right)+1;
    }
};