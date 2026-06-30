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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smalldummy = new ListNode(0);
        ListNode* largedummy = new ListNode(0);
        ListNode* curr = head;
        ListNode* smalltail = smalldummy;
        ListNode* largetail = largedummy;
        while(curr != nullptr){
            ListNode* nextNode = curr->next;
            if(curr->val < x){
                smalltail->next = curr;
                smalltail = curr;
            }else{
                largetail->next = curr;
                largetail = curr;

            }
            curr = nextNode;
        }
        largetail ->next = nullptr;
        smalltail->next =  largedummy ->next;
        return smalldummy->next;
    }
};
