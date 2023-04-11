//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
//Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode* curr=head;
        if(curr==NULL){
            return head;
        }
       struct ListNode* temp=curr->next;
       while(temp!=NULL){
           if(curr->val != temp->val){
               curr=temp;
               temp=temp->next;
           }
           else{
               curr->next=temp->next;
               delete temp;
               temp=curr->next;
           }
       }
       return head;

    }
};