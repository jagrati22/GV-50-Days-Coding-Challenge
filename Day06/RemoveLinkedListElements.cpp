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
    ListNode* removeElements(ListNode* head, int val) {
        //create a dummy node 
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        //step 2 : traversal pointers
        ListNode *prev = dummy;
        ListNode *curr = head;

        // step 3 : traversal
        while(curr){
            if(curr->val == val){
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }else{
                prev = curr;
                curr = curr->next;
            }
        }
        // step 4 return new head
        return dummy->next;
    }
};
