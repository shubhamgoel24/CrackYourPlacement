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
        stack<ListNode*> a,b;
        ListNode *start=l1;
        while(l1 || l2){
            if(l1){
                a.push(l1);
                l1=l1->next;
            }
            if(l2){
                b.push(l2);
                l2=l2->next;
            }
        }
        int c=0;
        while((!a.empty() || !b.empty()) || c!=0 ){
            ListNode *x,*y;
            int q=0;
            if(!a.empty()){
                x=a.top();
                q+=x->val;
                a.pop();
            }
            else{
                x=new ListNode();
                x->next=start;
                start=x;
            }
            if(!b.empty()){
                y=b.top();
                q+=y->val;
                b.pop();
            }
            q+=c;
            x->val=q%10;
            c=q/10;
        }
        return start;
    }
};