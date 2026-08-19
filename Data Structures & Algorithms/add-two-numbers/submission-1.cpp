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
        ListNode* x = l1;
        ListNode* y = l2;

        int carry = 0;
        int digit = 0;

        ListNode* head = new ListNode();
        ListNode* curr = head;

        while(x != nullptr || y!= nullptr){
            int val1 = (x != nullptr) ? x->val : 0;
            int val2 = (y != nullptr) ? y->val : 0;

            int sum = val1 + val2 + carry;
            digit = sum % 10;
            carry = sum / 10;


            curr->next = new ListNode(digit);
            curr = curr->next;

            if (x != nullptr) x = x->next;
            if (y != nullptr) y = y->next;
        }

        if(carry != 0){
            digit = carry;
            curr->next = new ListNode(digit);
        }
        return head->next;
    }
};
