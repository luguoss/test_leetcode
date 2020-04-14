/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
        vector<int> dp(n+1);
        int ans = INT_MIN;
        for (int i = 1; i <= n; i++) {
            int x = nums[i-1];
            dp[i] = max(dp[i-1], 0) + x;   // 跟上述状态转移等价
            ans = max(ans, dp[i]);
        }
        return ans;

    }
};
// @lc code=end

