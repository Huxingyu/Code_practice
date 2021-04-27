//leetcode 46.permutations

#include <iostream>
#include <cstdlib>
#include <vector>
#define max 10

using namespace std;

class Solution {
private:
    int n,p[max];
    bool hashTable[max]={false};
    vector<int> vt;
    vector<vector<int>> ans;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vt=nums;
        n=nums.size();
        generate(1);
        return ans;
    }
    void generate(int index){
        if(index==n+1){
            vector<int> temp;
            for(int i=1;i<=n;i++){
                temp.push_back(p[i]);
            }
            ans.push_back(temp);
            return;
        }
        for(int i=1;i<=n;i++){
            if(hashTable[i]==false){
                p[index]=vt[i-1];
                hashTable[i]=true;
                generate(index+1);
                hashTable[i]=false;
            }
        }
    }
};

int main(){
    vector<int> vt={1,3,5};
    Solution x;
    vector<vector<int>> ans=x.permute(vt);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}