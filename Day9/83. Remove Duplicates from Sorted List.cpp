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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* x=head;
        ListNode* n;
        while(x!=NULL && x->next!=NULL){
            n=x;
            while(n->next!=NULL && n->next->val == x->val)
                n=n->next;
            x->next=n->next;
            x=x->next;
        }
        return head;
    }
};