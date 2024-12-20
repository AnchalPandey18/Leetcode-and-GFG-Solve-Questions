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

// Iterative Solution


// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* temp = head;
//         while(temp != NULL) {
//             ListNode* front = temp->next;
//             temp->next = prev;
//             prev = temp;
//             temp = front;
//         }
//         return prev;
//     }
// };

// Recursive Solution

class Solution {
    public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
};