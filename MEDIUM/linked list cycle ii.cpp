//https://leetcode.com/problems/linked-list-cycle-ii/
//Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;

        while (fast && fast->next) {
            slow = slow->next, fast = fast->next->next;
            if (slow == fast) {  
                slow = head;
                while (slow != fast) {
                    slow = slow->next, fast = fast->next;
                }
                return slow; 
            }
        }
        return nullptr;
    }
};