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
public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
  int carry=0;
	ListNode newNumber=new ListNode(0);
	ListNode head=newNumber;
	while(l1!=null || l2!=null){
		int sum=0;
		int val1=0;
		if(l1!=null)
		{
		sum+=l1.val;			
		l1=l1.next;
		}	
		if(l2!=null){
		sum+=l2.val;
		l2=l2.next;			
		}
		sum+=carry;
    carry=0;
		if(sum>9){
			carry=sum/10;
		}
		val1=sum%10;
		newNumber.next=new ListNode(val1);
		newNumber=newNumber.next;
	}
	if(carry>0){
			newNumber.next=new ListNode(carry);
			newNumber=newNumber.next;
	}
	// head=reverseLinkedList(head.next);
	return head.next;
    }
  public ListNode reverseLinkedList(ListNode curr){
		if(curr==null || curr.next==null){
			return curr;
		}else{
    ListNode newNode=null;
		while(curr!=null){
		ListNode next=curr.next;
		curr.next=newNode;
		newNode=curr;
		curr=next;
		}
			return newNode;
		}
	}
}