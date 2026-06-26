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
    ListNode* deleteMiddle(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* hare = head;
        ListNode* tortoise = head;
        if(head->next == NULL)
    return NULL;
        while(hare != NULL && hare->next != NULL){
            prev = tortoise;
            tortoise = tortoise->next;
            hare = hare->next->next;
        }
        // deleting the node
        prev->next = tortoise->next;
        return head;
    }
};
