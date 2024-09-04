/*
Method 1 using map to find our repeated node

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,bool>mpp;
        while(head)
        {
          if(mpp.find(head)!=mpp.end())
          {
            return true;
          }

          mpp[head]=true;
          head=head->next;
        }
     return false;
    }
};



Method-2 Tortoise method


class Solution {
public:
    bool hasCycle(ListNode *head) {
        //tortoise method

        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL)
        {
          fast=fast->next;
          if(fast!=NULL)
          {
            slow=slow->next;
            fast=fast->next;
          }

          if(slow==fast)
          {
            return true;
          }
        }

        return false;
    }
};

By using Slow and Fast Pointers for moving



*/