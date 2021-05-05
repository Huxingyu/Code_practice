//938. Range Sum of BST

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
    int rangeSumBST(TreeNode* root, int low, int high) {
        perorder(root);
        int n=ans.size(),sum=0;
        for(int i=0;i<n;i++){
            if(ans[i]>=low && ans[i]<=high){
                sum+=ans[i];
            }
        }
        return sum;
    }
    void perorder(TreeNode* root){
        if(root==nullptr){
            return;
        }
        ans.push_back(root->val);
        perorder(root->left);
        perorder(root->right);
    }
};

