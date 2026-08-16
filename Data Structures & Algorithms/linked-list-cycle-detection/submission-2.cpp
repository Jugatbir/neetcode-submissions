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
        /* more memory approach
        
        unordered_set<ListNode* > done;
        ListNode *p = head;
        while(p != nullptr){
            if(done.count(p) == 1){
                return true;
            }
            done.insert(p);
            p = p->next;

        }
        return false; */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};
