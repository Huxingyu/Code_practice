#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>

using namespace std;

//set::upper_bound和 Java 中的TreeSet::floor有点微妙的不同。为了遵循区间的左闭右开原则，set::upper_bound返回的是小于等于目标元素的最大元素的后一个元素（即大于目标元素的最小元素），所以要对返回的迭代器进行自减操作。

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<int> s;
        for (int i = 0; i < nums.size(); ++i) {
            auto lower = s.lower_bound(nums[i]);
            if (lower != s.end() && *lower <= nums[i] + t) return true;
            auto upper = s.upper_bound(nums[i]);
            if (upper != s.begin() && nums[i] <= *--upper + t) return true; // upper 为 s.begin() 时说明查找结果为空
            s.insert(nums[i]);
            if (s.size() > k) s.erase(nums[i - k]);
        }
        return false;
    }
};