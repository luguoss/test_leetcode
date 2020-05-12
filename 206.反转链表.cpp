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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == nullptr)
            return nullptr;
        ListNode* pNode = head;
        ListNode* pPre = nullptr;
        ListNode* pNext = nullptr;

        while(pNode != nullptr)
        {

            pNext = pNode->next;
            
            pNode->next = pPre;
            pPre = pNode;
            pNode = pNext;

            if(pNode == nullptr)
            {
                head = pPre;
                return head;
            }
            

        }

        return head;
    }
};
// @lc code=end

