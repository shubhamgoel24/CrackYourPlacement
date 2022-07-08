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
    int getDecimalValue(ListNode* head) {
        queue<int> s;
        int c=0;
        while(head!=NULL){
            s.push(head->val);
            head=head->next;
            c++;
        }
        c--;
        int ans=0;
        while(!s.empty()){
            ans+=(s.front()*pow(2,c));
            c--;
            s.pop();
        }
        return ans;
            
    }
};