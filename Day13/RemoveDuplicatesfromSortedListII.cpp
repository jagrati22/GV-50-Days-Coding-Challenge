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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy;
        ListNode *curr = head;
        while(curr){
            // case 1 jab duplicate hai
            if(curr->next && curr->val == curr->next->val){ 
                int dupval = curr->val; 
                // poora duplicate value skip karo
                while(curr && curr->val == dupval){
                    curr = curr->next;
                }
                // prev ko next unique node se connect karo
                prev->next = curr;
            }else{
                // case 2 when there is no duplicate
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};
