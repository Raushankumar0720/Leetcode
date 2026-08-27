// Last updated: 8/27/2026, 5:12:51 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        if (fast == nullptr) {
            return head->next;
        }

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};