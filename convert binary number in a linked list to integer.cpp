//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
//Convert Binary Number in a Linked List to Integer
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res=0;
        for (;head;head=head->next) {
            res=res*2+head->val;
        }
        return res;
    }
};