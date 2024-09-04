/*class Solution {
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
*/

//Reverse of a linked list having current and previous pointer
//keeping track for the same