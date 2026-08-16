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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i = 0;
        ListNode* ye = head;
        ListNode* jo = nullptr;

            while(ye != NULL){
                ListNode* wo = ye->next;
                ye->next = jo;
                jo = ye;
                ye = wo;
            }
                ListNode* curr = jo;
                ListNode* prev = nullptr;
 
            while(i < n-1){
                prev = curr;
                curr = curr->next;
                i++;
            }

        if (prev == nullptr) {
            jo = curr->next;
        } else {
            prev->next = curr->next;
        }

        ListNode* now = jo;
        ListNode* previe = nullptr;

        while (now != nullptr) {
            ListNode* nextie = now->next;
            now->next = previe;
            previe = now;
            now = nextie;
        }

        return previe;
    }
};
