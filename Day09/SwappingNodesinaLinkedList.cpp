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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        int n = k-1;
        while(n>0){
            first = first->next;
            n--;
        }
        ListNode* frontnode = first;
        ListNode* temp = frontnode;
        ListNode* second = head;
        while(temp->next != NULL){
            temp = temp->next;
            second = second->next;
        }
        swap(frontnode->val,second->val);
        return head;
    }
};
