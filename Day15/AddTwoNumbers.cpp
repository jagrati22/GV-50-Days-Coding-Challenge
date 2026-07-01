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
        int carry = 0;
        ListNode* dummy = new ListNode(0);
            ListNode* tail = dummy;
        while(l1!= NULL || l2 != NULL || carry != 0){
            int x = 0;
            int y = 0;
            if(l1 != NULL){
                x = l1->val;
            }
            if(l2 != NULL){
                y = l2->val;
            }
            int sum = x + y + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode* newNode = new ListNode(digit);
            
            tail->next = newNode;
            tail = tail->next;
            if(l1 != NULL)
            l1 = l1->next;

            if(l2 != NULL)
            l2 = l2->next;
        }
        return dummy->next;
    }
};
