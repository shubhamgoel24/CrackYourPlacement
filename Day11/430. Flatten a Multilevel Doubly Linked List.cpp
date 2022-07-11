/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
void sol(Node* head,Node* &tail){
    if(!head)
        return;
    Node* next=head->next;
    tail->next=head;
    head->prev=tail;
    tail=head;
    if(tail->child){
        sol(tail->child,tail);
    }
    head->child=NULL;
    if(next){
        sol(next,tail);
    }
}

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head)
            return head;
        Node* x=new Node(1);
        sol(head,x);
        head->prev=NULL;
        return head;
    }
};