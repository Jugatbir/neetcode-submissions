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
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode* > done;
        ListNode *p = head;
        while(p != nullptr){
            if(done.count(p) == 1){
                return true;
            }
            done.insert(p);
            p = p->next;

        }
        return false;
    }
};
