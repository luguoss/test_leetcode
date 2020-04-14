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

// //状态表示： 
// dp[i] 代表以第i个元素结尾的最大和连续子数组

// 状态转移： 
// dp[i] = dp[i-1] + x, dp[i-1] > 0
// dp[i] = x, dp[i-1] <= 0

// 结果：
// 查看以每一个元素结尾的最大和连续子数组，看看那个最大。 （题目保证数组不为空）
