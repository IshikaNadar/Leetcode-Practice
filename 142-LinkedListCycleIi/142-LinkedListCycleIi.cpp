// Last updated: 4/15/2026, 10:48:24 PM
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
         if (head == nullptr || head->next == nullptr){
             return nullptr; 
              }
            ListNode*low =head;
            ListNode *high =head;
            while(high!=nullptr && high->next!=nullptr){
            low=low->next;
            high = high->next->next;
          
            if(low==high){
            low = head;
            
                while(low!=high){
                    low=low->next;
                    high = high->next;
                }return low;
            }
               
            } 
          return nullptr;
   
   //Floyd’s Cycle Detection method

    }
};