/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
#include <set>
class Solution {
public:
    // int searchInsert(vector<int>& nums, int target) {
    //     if(nums.size() == 0 || target < nums[0])
    //         return 0;

    //     int pre = 0;
    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //         if(nums[i] == target)
    //         {
    //             return i;
    //         }
    //         else if(nums[i] < target)
    //         {
    //             pre = i;
    //         }
    //         else if(nums[i] > target)
    //         {
    //             return pre+1;
    //         }
    //     }
    //     return pre + 1 == nums.size()?pre+1:pre;
    // }
        int searchInsert(vector<int> &nums, int target) {
        int size = nums.size();
        if (size == 0) {
            return 0;
        }

        // 特判
        if (nums[size - 1] < target) {
            return size;
        }
        int left = 0;
        int right = size - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            // 严格小于 target 的元素一定不是解
            if (nums[mid] < target) {
                // 下一轮搜索区间是 [mid + 1, right]
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }

};
// @lc code=end

