//leetcode  104. Maximum Depth of Binary Tree

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x,TreeNode *left,TreeNode *right):val(x),left(left),right(right){}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int m=maxDepth(root->left);
        int n=maxDepth(root->right);
        int ans=max(m,n)+1;
        return ans;
    }
};