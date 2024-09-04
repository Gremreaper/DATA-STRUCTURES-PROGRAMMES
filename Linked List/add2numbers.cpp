/*
Using the concept of sum and carry
/**
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);  // Dummy node to simplify edge cases
        ListNode* current = &dummy;
        int carry = 0;
        
        // Traverse both lists
        while (l1 || l2 || carry) {
            int sum = carry;  // Start with the carry from the previous addition
            
            // Add value from l1 if available
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            // Add value from l2 if available
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            // Compute carry and value for the current node
            carry = sum / 10;
            int digit = sum % 10;
            
            // Create a new node with the digit and move the pointer
            current->next = new ListNode(digit);
            current = current->next;
        }
        
        // Return the next node of dummy which is the head of the result list
        return dummy.next;
    }
};










*/