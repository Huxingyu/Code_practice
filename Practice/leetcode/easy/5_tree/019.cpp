//108. Convert Sorted Array to Binary Search Tree

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left,*right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x,TreeNode *left,TreeNode *right):val(x),left(left),right(right){}
};

class Solution {
    public:
        TreeNode* sortedArrayToBST(vector<int>& nums) {
            int n=nums.size();
            int x=n/2;
            TreeNode* root=new TreeNode(nums[x]);
            for(int i=0;i<n;i++){
                //每次都选择中间的？
            }
            return root;
        }
        TreeNode* newNode(int x){
            TreeNode* node=new TreeNode;
            node->val=x;
            node->left=node->right=nullptr;
            return node;
        }
        void insert(TreeNode*& root,int x){
            if(root==nullptr){
                root=newNode(x);
                return;
            }
            if(root->val>x){
                insert(root->left,x);
            }else{
                insert(root->right,x);
            }
        }
};