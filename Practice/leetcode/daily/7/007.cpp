//378. Kth Smallest Element in a Sorted Matrix

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int kthSmallest(vector<vector<int>>& matrix, int k) {
            
        }
};

// class Solution {
//     public:
//         int kthSmallest(vector<vector<int>>& matrix, int k) {
//             vector<int> temp,ans;
//             int n=matrix.size();        //same as matrix[i].size()
//             for(int i=0;i<n;i++){
//                 temp=matrix[i];
//                 for(int j=0;j<n;j++){
//                     ans.push_back(temp[j]);
//                 }
//             }
//             sort(ans.begin(),ans.end());
//             return ans[k-1];
//         }
// };