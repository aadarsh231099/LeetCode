//https://leetcode.com/problems/middle-of-the-linked-list/
//Middle of the Linked List
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
private:
    int getLength(ListNode* head){
        int len = 0;
        while(head != NULL){
            len++;
            head = head->next;
        }
        return len;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int len = getLength(head);
        int temp = 0;
        ListNode* ans = head;
        while(temp < len/2){   
            ans = ans->next;
            temp++;
        }
        return ans;
    }
};