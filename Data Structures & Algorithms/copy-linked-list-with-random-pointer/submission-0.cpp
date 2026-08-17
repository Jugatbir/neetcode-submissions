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
        Node* curr = head;
        if (head == nullptr)    return nullptr;

        while(curr != NULL){
            Node* ans = new Node(curr->val);
            ans->next = curr->next;
            curr->next = ans;
            curr = ans->next;
        }
        curr = head;
        while(curr!= NULL){
            if (curr->random != nullptr)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }
        
        curr = head;
        Node* newhead = head->next;
        Node* newcurr = newhead;
        
        while(curr != NULL){
            curr->next = newcurr->next;
            curr = curr->next;
            if (curr != nullptr) {
                newcurr->next = curr->next;
                newcurr = newcurr->next;
            }
        }
        return newhead;
    }
};
