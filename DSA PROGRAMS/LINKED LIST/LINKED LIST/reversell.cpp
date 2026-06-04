#include <iostream>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head;
        ListNode *prev=NULL;
        while(curr)
        {
          ListNode *r=curr->next;
          curr->next=prev;
          prev=curr;
          curr=r;
        }

        return prev;
    }
};
int main(){
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* reversed = s.reverseList(head);
    while (reversed) {
        cout << reversed->val << " ";
        reversed = reversed->next;
    }
    return 0;
}


//Reverse of a linked list having current and previous pointer
//keeping track for the same