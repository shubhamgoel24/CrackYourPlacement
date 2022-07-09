/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return head;
        Node* start=NULL,*n,*h=head;
        unordered_map<Node*,Node*> m;
        while(head){
            Node* x=new Node(head->val);
            if(!start){
                start=x;
                n=x;
            }else{
                n->next=x;
                n=x;
            }
            m[head]=n;
            head=head->next;
        }
        n=start;
        while(h){
            if(h->random)
                n->random=m[h->random];
            h=h->next;
            n=n->next;
        }
        return start;
    }
};