/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int min_val = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            min_val = min(min_val, prices[i]);
            res = max(res, prices[i] - min_val);
        }
        return res;
    }
};
// @lc code=end

