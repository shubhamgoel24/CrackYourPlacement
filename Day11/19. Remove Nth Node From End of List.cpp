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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* q=head,*p=NULL,*r=head;
        while(c<n){
            r=r->next;
            c++;
        }
        while(r){
            r=r->next;
            p=q;
            q=q->next;
        }
        if(!p)
            head=head->next;
        else{
            p->next=q->next;
        }
        return head;
    }
};