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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode * newHead=new ListNode(0);
      ListNode * ptr=newHead;
      int num=0,carry=0;
        while(l1!=NULL && l2!=NULL){
          num=l1->val+l2->val+carry;
          if(num>9){
            carry=num/10;
            num=num%10;
          }else carry=0;
          ptr->next=new ListNode(num);
          ptr=ptr->next;
          l1=l1->next;
          l2=l2->next;
        }
      while(l1!=NULL){
        num=l1->val+carry;
        if(num>9){
            carry=num/10;
            num=num%10;
          }else carry=0;
          ptr->next=new ListNode(num);
          ptr=ptr->next;
          l1=l1->next;
      }
      while(l2!=NULL){
        num=l2->val+carry;
        if(num>9){
            carry=num/10;
            num=num%10;
          }else carry=0;
        // cout<<"num2:"<<num<<"carry:"<<carry<<endl;
          ptr->next=new ListNode(num);
          ptr=ptr->next;
          l2=l2->next;
      }
      if(carry>0){
        ptr->next=new ListNode(carry);
      }
      newHead=newHead->next;
      return newHead;
    }
};