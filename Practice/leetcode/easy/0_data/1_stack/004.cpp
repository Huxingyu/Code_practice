#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int temp,n=T.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(st.empty()!=true && T[st.top()]<T[i]){
                int top_num=st.top();
                ans[st.top()]=i-top_num;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};

int main(){
    vector<int> temp={1,2,3,-1};
    //(1 1 4 2 1 1 0 0)->(1, 1, 4, 2, 1, 1, 0, 0)
    Solution x;
    vector<int> ans=x.dailyTemperatures(temp);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    system("pause");
    return 0;
}