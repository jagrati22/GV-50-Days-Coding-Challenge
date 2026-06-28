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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        
        ListNode* curr = head;
        
        // Puri list me traverse karo
        while (curr && curr->next) {
            // Do adjacent nodes ka GCD nikaalo
            int gcdVal = std::gcd(curr->val, curr->next->val);
            
            // Naya node banao jisme GCD value ho
            ListNode* gcdNode = new ListNode(gcdVal);
            
            // Naye node ko beech me insert karo
            gcdNode->next = curr->next;
            curr->next = gcdNode;
            
            // Pointer ko agle original node par le jao
            // (curr -> gcdNode -> original_next, toh ab curr ko original_next par bhejna hai)
            curr = gcdNode->next;
        }
        
        return head;
    }
};
