#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *first = head;
        ListNode *second = head;
        while (second && second->next) {
            second = second->next;
            if (first == second) {
                return true;
            }
            second = second->next;
            first = first->next;
        }
        return false;
    }
};

// Helper function to create a linked list with a cycle for testing
ListNode* createCycleList() {
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; // Creating a cycle

    return head;
}

// Helper function to create a normal linked list (no cycle)
ListNode* createNormalList() {
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL; // No cycle

    return head;
}

int main() {
    Solution solution;

    ListNode *cyclicList = createCycleList();
    ListNode *normalList = createNormalList();

    cout << "Cycle present in cyclicList: " << (solution.hasCycle(cyclicList) ? "Yes" : "No") << endl;
    cout << "Cycle present in normalList: " << (solution.hasCycle(normalList) ? "Yes" : "No") << endl;

    return 0;
}
