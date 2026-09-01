// Last updated: 9/1/2026, 11:58:27 PM
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
    ListNode* swapPairs(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* prev = nullptr;

        while (first != nullptr && second != nullptr) {
            ListNode* third = second->next;

            first->next = third;
            second->next = first;

            if(prev != nullptr){
                prev->next = second;
            }else{
                head = second;
            }

            prev = first;
            first = third;
            if(third != nullptr){
                second = third->next;
            }else{
                second = nullptr;
            }
        }

        return head;
    }
};