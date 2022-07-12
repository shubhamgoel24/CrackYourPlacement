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
        if(!head || !head->next)
            return head;
        int c=-101;
        if(head->val==head->next->val)
            c=head->val;
        while(head && head->val == c)
            head=head->next;
        if(!head)
            return head;
        if(head->next && head->val==head->next->val)
            head=deleteDuplicates(head);
        else if(head->next && head->val!=head->next->val)
            head->next=deleteDuplicates(head->next);
        return head;  
    }
};