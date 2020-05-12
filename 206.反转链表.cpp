/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <stack>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == nullptr)
            return nullptr;
        auto pNode = head;
        auto pReverse  = pNode;
        std::stack< ListNode* > stack;
        while(pNode != nullptr)
        {
            stack.push(pNode);
            pReverse = pNode;
            pNode = pNode->next;
        }
        
        auto pHead = pReverse;
  
        while(!stack.empty())
        {    
            stack.pop();
            if(!stack.empty())
            {
                
                pReverse->next = stack.top();
                pReverse = pReverse->next;
            }
            
        }
        pReverse->next = nullptr;
        return pHead;
    }
};
// @lc code=end

