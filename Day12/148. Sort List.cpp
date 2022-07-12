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
    ListNode* sortList(ListNode* head) {
        vector<int> x;
        while(head){
            x.push_back(head->val);
            head=head->next;
        }
        sort(x.begin(),x.end());
        ListNode*p=NULL;
        for(int i:x){
            ListNode*q=new ListNode(i);
            if(head==NULL)
                head=q;
            else
                p->next=q;
            p=q;
        }
        return head;
    }
};