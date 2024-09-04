/*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *first=head;
        ListNode *second=head;
        for(int i=1;i<=n;i++)
        {
          first=first->next;
        }

        if(first==NULL)
        {
          return head->next;
        }

        while(first->next!=NULL)
        {
          first=first->next;
          second=second->next;
        }
        second->next=second->next->next;

        return head;
    }
};
*/