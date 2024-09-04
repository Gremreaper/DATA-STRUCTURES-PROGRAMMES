/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *curr=head;
        int counter=0;
        while(curr!=NULL)
        {
          counter++;
          curr=curr->next;
        }
        counter/=2;
        curr=head;
        while(counter!=0)
        {
          curr=curr->next;
          counter--;
        }

        return curr;
    }
};

find the length of linked list and traverse till the mid of our ll (for odd=cnt/2 even cnt/2+1)
*/