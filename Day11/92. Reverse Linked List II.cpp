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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *px=NULL,*x=head,*y,*z,*p;
        int c=1;
        while(x && c!=left){
            px=x;
            x=x->next;
            c++;
        }   
        p=x;
        if(x){
            y=x->next;
            c++;
        }
        while(y && c<=right){
            z=y->next;
            y->next=p;
            p=y;
            y=z;
            c++;
        }
        
        x->next=y;
        if(px)
        px->next=p;
        if(left==1)
            head=p;
        return head;
    }
};