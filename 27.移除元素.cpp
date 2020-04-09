/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int pos = 0;
        while (pos < len) {
            if (nums[pos] == val)
                nums[pos] = nums[--len];
            else
                ++pos;
        }

        return len;
    }

};
// @lc code=end

