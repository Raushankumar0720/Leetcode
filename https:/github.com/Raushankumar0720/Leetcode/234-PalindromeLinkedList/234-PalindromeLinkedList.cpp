// Last updated: 9/10/2026, 11:42:07 PM
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
    bool isPalindrome(ListNode* head) {

        // sol 1

        vector<int> v;
        vector<int> v1;

        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        int mid = count / 2;

        ListNode* midNode = head;

        for (int i = 0; i < mid; i++) {
            midNode = midNode->next;
        }

        for (ListNode* i = midNode; i != nullptr; i = i->next) {
            v.push_back(i->val);
        }

        ListNode* i = head;

        for (int j = 0; j < mid; j++) {
            v1.push_back(i->val);
            i = i->next;
        }

        reverse(v.begin(), v.end());

        for (int j = 0; j < v1.size(); j++) {
            if (v1[j] != v[j]) {
                return false;
            }
        }

        return true;

        // SOL 2

        //     ListNode* address = nullptr;

        //     ListNode* i = head;

        //     while(i != nullptr){
        //         ListNode* newNode = new ListNode();
        //         newNode->next = address;
        //         address = newNode;
        //         newNode->val = i->val;
        //         i = i->next;
        //     }

        //     i = head;
        //     ListNode* j = address;

        //     while(i != nullptr){
        //         if(i->val != j->val){
        //             return false;
        //         }
        //         i = i->next;
        //         j = j->next;
        //     }
        //     return true;

        // }
    }
};