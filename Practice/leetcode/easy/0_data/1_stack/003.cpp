#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n=T.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(j==n-1 && T[j]<=T[i]){
                    ans.push_back(0);
                    break;
                }
                if(T[j]>T[i]){
                    ans.push_back(j-i);
                    break;
                }
            }
        }
        ans.push_back(0);
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