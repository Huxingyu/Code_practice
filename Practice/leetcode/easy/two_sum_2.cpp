//two sum

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> error={0,0};
            vector<int>::iterator it=nums.begin();
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(*(it+i) + *(it+j)==target){
                        vector<int> vt={i,j};
                            return vt;
                    }
                }
            }
            return error;
        }
};

int main(){
    Solution x;
    vector<int> num={3,2,4};
    int target=6;
    vector<int> ans=x.twoSum(num,target); 
    for(auto x=ans.begin();x!=ans.end();x++){
        cout<<*x<<" ";
    }    
    system("pause");
    return 0;
}