/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i]) != m.end())       //m中存在对应的键值
                return {m[target-nums[i]] , i};         //因为i为较大的元素，此时添加进去的键值都还小于i，所以i在后面

            m[nums[i]]=i;       //向map中添加元素
        }
        return {};
    }

    
};
// @lc code=end

