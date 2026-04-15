// Last updated: 4/15/2026, 10:48:11 PM
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
 
class Solution {
    public ListNode reverseList(ListNode head) {
         
        ListNode prev = null;
        ListNode cur = head;

        while (cur != null) {
            ListNode nextTemp = cur.next; 
            cur.next = prev;              
            prev = cur;                   
            cur = nextTemp;              
        }

        return prev;
    

    }
}