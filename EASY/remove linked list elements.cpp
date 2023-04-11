//https://leetcode.com/problems/remove-linked-list-elements/
//Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = new ListNode;
        temp -> next = head;
        ListNode* curr = temp;
        
        while(curr -> next) {
            if(curr -> next -> val == val) {
                curr -> next = curr -> next -> next;
            } else {
                curr = curr -> next;
            }
        }
        
        return temp -> next;
    }
};