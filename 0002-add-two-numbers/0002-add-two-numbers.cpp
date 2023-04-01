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
    // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //   ListNode * newHead=new ListNode(0);
    //   ListNode * ptr=newHead;
    //   int num=0,carry=0;
    //     while(l1!=NULL && l2!=NULL){
    //       num=l1->val+l2->val+carry;
    //       if(num>9){
    //         carry=num/10;
    //         num=num%10;
    //       }else carry=0;
    //       ptr->next=new ListNode(num);
    //       ptr=ptr->next;
    //       l1=l1->next;
    //       l2=l2->next;
    //     }
    //   while(l1!=NULL){
    //     num=l1->val+carry;
    //     if(num>9){
    //         carry=num/10;
    //         num=num%10;
    //       }else carry=0;
    //       ptr->next=new ListNode(num);
    //       ptr=ptr->next;
    //       l1=l1->next;
    //   }
    //   while(l2!=NULL){
    //     num=l2->val+carry;
    //     if(num>9){
    //         carry=num/10;
    //         num=num%10;
    //       }else carry=0;
    //     // cout<<"num2:"<<num<<"carry:"<<carry<<endl;
    //       ptr->next=new ListNode(num);
    //       ptr=ptr->next;
    //       l2=l2->next;
    //   }
    //   if(carry>0){
    //     ptr->next=new ListNode(carry);
    //   }
    //   newHead=newHead->next;
    //   return newHead;
    // }
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return dummy->next;
    }
};