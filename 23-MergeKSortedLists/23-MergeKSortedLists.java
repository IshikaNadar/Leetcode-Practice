// Last updated: 4/15/2026, 10:48:37 PM
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
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<ListNode> pq = new PriorityQueue<>(new Comparator<ListNode>(){
            public int compare(ListNode n1, ListNode n2){
                return n1.val-n2.val;
            }
        });
        ListNode head = null, prev = null;
        for(int i=0; i < lists.length; i++){
            if(lists[i] != null){
                pq.add(lists[i]);
                lists[i] = lists[i].next;
            }
        }
        while(!pq.isEmpty()){
            ListNode curr = pq.remove();
            if(head == null) 
                head = curr;
            else
                prev.next = curr;
            prev = curr;
            if(curr.next != null)
            pq.add(curr.next);
        }
        return head;
    }
}