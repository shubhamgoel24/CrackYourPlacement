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
        int c=0;
        ListNode *head=l1,*last=l1;
        while((l1 || l2) || c!=0){
            int a=0;
            if(l1){
                a+=l1->val;
            }
            if(l2){
                a+=l2->val;
                l2=l2->next;
            }
            a+=c;
            c=a/10;
            if(l1){
                l1->val=a%10;
                last=l1;
                l1=l1->next;
            }else{
                ListNode *x=new ListNode(a%10);
                last->next=x;
                last=x;
            }
        }
        return head;
    }
};