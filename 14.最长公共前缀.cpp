/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string r = strs.size() ? strs[0] : "";
        for(auto s: strs){
            while(s.substr(0, r.size()) != r){
                r = r.substr(0, r.size() - 1);
                if(r == "") return r;
            }
        }
        return r;


    }
};
// @lc code=end

