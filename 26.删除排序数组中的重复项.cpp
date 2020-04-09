/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())return 0;
        auto index=nums.begin();
        int history=*index;
        for(auto &i : nums){
            if(index == nums.begin()){
                index++;
                continue;
            }
            if(i != history){
                *index=i;
                index++;
                history=i;
            }
        }
        nums.erase(index,nums.end());
        return nums.size();

    }
};
// @lc code=end

