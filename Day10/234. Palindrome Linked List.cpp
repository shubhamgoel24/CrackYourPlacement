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
    ListNode* reverseList(ListNode* head) {
        if(head!=NULL && head->next!=NULL){
            ListNode *p=head,*n=head->next;
            head->next=NULL;
            while(n){
                head=n;
                n=n->next;
                head->next=p;
                p=head;
            }
        }
        return head;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
            return true;
        ListNode*p1=head,*p2=head,*h2;
        while(p2 && p2->next){
            p1=p1->next;
            p2=p2->next->next;
        }
        if(p2==NULL)
            h2=reverseList(p1);
        else
            h2=reverseList(p1->next);
        while(h2){
            if(h2->val != head->val)
                return false;
            h2=h2->next;
            head=head->next;
        }
        return true;
    }
};