// Last updated: 8/30/2026, 11:21:49 PM
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;

    
    }
};