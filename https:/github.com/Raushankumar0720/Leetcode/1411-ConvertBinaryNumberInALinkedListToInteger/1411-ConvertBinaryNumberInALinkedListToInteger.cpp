// Last updated: 8/10/2026, 1:49:51 PM
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
    int getDecimalValue(ListNode* head) {
        
        ListNode* current = head;
        int dec_val = 0;

        while(current != nullptr){
            dec_val = dec_val * 2 + current->val;
            current = current->next;
        }
        return dec_val;
    }
};