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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = nullptr;

        ListNode* now = second;
        ListNode* prev = nullptr;

        while(now != NULL){
            ListNode* nextie = now->next;
            now->next = prev;
            prev = now;
            now = nextie;
        }
        ListNode* lol1 = head;
        ListNode* lol2 = prev;

        while (lol2 != nullptr) {
            ListNode* temp1 = lol1->next;
            ListNode* temp2 = lol2->next;

            lol1->next = lol2;
            lol2->next = temp1;

            lol1 = temp1;
            lol2 = temp2;
        }
    }
};
