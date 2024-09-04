/*
method 1 by storing in vector and traversing
method 2 reverse the ll from middle and traverser 

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;

        // Find the middle of the list
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the list
        ListNode *reverse = slow->next;
        ListNode *prev = NULL;
        while (reverse) {
            ListNode *r = reverse->next;
            reverse->next = prev;
            prev = reverse;
            reverse = r;
        }

        // Compare the first and second halves
        ListNode *firstHalf = head;
        ListNode *secondHalf = prev; // prev now points to the head of the reversed list
        while (secondHalf) {
            if (firstHalf->val != secondHalf->val) {
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};

*/