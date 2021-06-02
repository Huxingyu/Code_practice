#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n=digits.size();        //[1,2,3],n=3
            int k=n-1;                  //k=2
            vector<int> ans(n,0);
            while(k!=-1 && digits[k]+1==10){     //digits[2]+1=3+1=4
                ans[k]=0;
                k--;
            }
            if(k!=-1){                  //2!=-1
                ans[k]=digits[k]+1;     //ans[2]=digits[2]+1
                for(int i=0;i<k;i++){
                    ans[i]=digits[i];
                }
            }else{
                ans.insert(ans.begin(),1);
            }
            return ans;
        }
};

int main(){
    Solution x;
    vector<int> test={9,9};
    vector<int> ans=x.plusOne(test);
    for(auto i:ans){
        cout<<i<<" ";
    }
    system("pause");
    return 0;
}