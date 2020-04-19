/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        if(size == 0)
            return 0;
        for(auto a = size - 1; a >= 0; a--)
        {
            if(s[a] == ' ' && a != size - 1)
            {
                return size - 1 - a;
            }
            else if(s[a] == ' ' && a == size - 1)
            {
                if(size == 1)
                {
                    return 0;
                }else
                {
                    continue;
                }
                
            }
        }
        return s.size();
    }
};
// @lc code=end

