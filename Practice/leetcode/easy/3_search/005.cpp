//35. Search Insert Position

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(target>nums[i]){
                j++;
            }else{
                break;
            }
        }
        return j;
    }
};

int main(){
    vector<int> vt={1};
    Solution x;
    cout<<x.searchInsert(vt,0)<<endl;
    system("pause");
    return 0;
}