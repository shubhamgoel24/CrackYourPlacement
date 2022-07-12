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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next)
            return head;
        ListNode *ph=NULL,*h=head;
        while(h && h->val<x){
            ph=h;
            h=h->next;
        }
        if(!h)
            return head;
        ListNode* q=h->next,*pq=h;
        while(q){
            if(q->val < x){
                pq->next=q->next;
                if(ph)
                    ph->next=q;
                else
                    head=q;
                q->next=h;
                ph=q;
                q=pq->next;
            }
            else{
                pq=q;
                q=q->next;
            }
        }
        return head;
    }
};