/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *check1=headA;
        ListNode *check2=headB;

        int count1=0;
        int count2=0;
        while(check1)
        {
          count1++;
          check1=check1->next;
        }

        while(check2)
        {
          count2++;
          check2=check2->next;
        }

        check1=headA;
        check2=headB;

        while(count1>count2)
        {
          check1=check1->next;
          count1--;
        }


         while(count2>count1)
        {
          check2=check2->next;
          count2--;
        }

        while(check1 && check2)
        {
          if(check1==check2)
          {
            return check1;
          }

          check1=check1->next;
          check2=check2->next;
        }

        return NULL;

    }
};
*/