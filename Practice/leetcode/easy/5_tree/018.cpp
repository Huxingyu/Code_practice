//1022. Sum of Root To Leaf Binary Numbers

#include <iostream>
#include <cstdlib>
#include <vector>
#include <stack>

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
        int sum=0;
        stack<int> st;
    public:
        int sumRootToLeaf(TreeNode* root) {
            perorder(root);
            return sum;
        }
        void perorder(TreeNode* root){
            if(root==nullptr){
                sum+=trans(st);
                return;
            }
            st.push(root->val);
            perorder(root->left);
            perorder(root->right);
            st.pop();
        }
        int trans(stack<int> st){
            int ans=0,up=1;
            while(st.empty()!=true){
                int temp=st.top()*up;
                up*=2;
                ans+=temp;
                st.pop();
            }
            return ans;
        }
};

TreeNode* newNode(int x){
    TreeNode* node=new TreeNode;
    node->val=x;
    node->left=node->right=nullptr;
    return node;
}

int main(){
    Solution x;
    TreeNode* root=new TreeNode;
    root->val=1;
    root->left=newNode(0);
    root->right=newNode(1);
    cout<<x.sumRootToLeaf(root)<<endl;
    system("pause");
    return 0;
}