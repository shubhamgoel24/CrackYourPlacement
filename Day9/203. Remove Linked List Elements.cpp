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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val)
            head=head->next;
        ListNode* p=head;
        if(p==NULL)
            return head;
        ListNode* x=p->next;
        while(x!=NULL && p!=NULL){
            while(x!=NULL && x->val==val)
                x=x->next;
            p->next=x;
            p=p->next;
            
            if(p!=NULL)
                x=p->next;
            else
                x=p;
        }
        return head;
    }
};