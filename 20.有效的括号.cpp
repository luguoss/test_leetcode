/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include <stack>
#include <unordered_map>
class Solution {
public:

    bool isValid(string s) {
        if(s.size() == 0)
        {
            return true;
        }else if(s.size() % 2 == 1)
        {
            return false;
        }
       
        stack<char> sign;
        unordered_map<char, char> key = {{'(',')'},{'{','}'},{'[',']'} };

        for(int i = 0; i < s.size();i++)
        {
            if(key.find(s[i]) != key.end())
            {
                sign.push(s[i]);
            }
            else 
            {
                if(sign.size()>0)
                {
                    if(key.find(sign.top())->second == s[i])
                        sign.pop();
                }else
                {
                    return false;
                }
            }
        }
        if(sign.size() == 0)
            return true;
        return false;
    }
};
// @lc code=end

