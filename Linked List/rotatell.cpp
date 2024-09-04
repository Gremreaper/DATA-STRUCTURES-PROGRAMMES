/*
Rotate list towards right by k times

**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;

        // Count the length of the list
        int counter = 0;
        ListNode* curr = head;
        while (curr) {
            curr = curr->next;
            counter++;
        }

        // If k is a multiple of the list length, no rotation is needed
        if (counter == k || counter == 0) {
            return head;
        }

        // Calculate the effective rotation
        k = k % counter;

        // If k is 0 after modulo operation, no rotation is needed
        if (k == 0) {
            return head;
        }

        // Find the new head and tail
        curr = head;
        int stepsToNewHead = counter - k;
        ListNode* newTail = nullptr;

        for (int i = 0; i < stepsToNewHead; i++) {
            newTail = curr;
            curr = curr->next;
        }

        // curr is the new head
        ListNode* newHead = curr;

        // Find the last node
        while (curr->next) {
            curr = curr->next;
        }

        // Link the last node to the original head
        curr->next = head;

        // Break the link at the new tail
        newTail->next = nullptr;

        return newHead;
    }
};







*/