// Last updated: 4/15/2026, 10:47:51 PM
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
    ListNode* middleNode(ListNode* head) {
         ListNode* fast = head;
        ListNode* slow = head;
        if(head==NULL) return NULL;
        
        else{
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
             slow=slow->next;
        }
           
            return slow;
        }
    }
};