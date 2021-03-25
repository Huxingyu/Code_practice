//two sum

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>::iterator it,iz;
            for(it=nums.begin();it!=nums.end();it++){
                if(*it<target){
                    for(iz=nums.begin();iz!=nums.end();iz++){
                        if(*iz<target && *it!=*iz && *it+*iz==target){
                            cout<<*it<<" "<<*iz<<endl;
                            temp=1;
                            break;
                        }
                    }
                }
                if(temp==1){
                    break;
                }
            }
        }
    private:
        int temp=0;
};

int main(){
    Solution x;
    vector<int> num={2,7,11,15};
    int target=9;
    x.twoSum(num,target);     
    system("pause");
    return 0;
}