/*

method 1 by using an unordered map and finding out loop



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

method 2 find out if loop exits
break at that point and traverse from head again

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode *slow=head;
        ListNode *fast=head;

        while(slow!=NULL && fast!=NULL)
        {
            fast=fast->next;

            if(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
            }

            if(slow==fast)
            {
                break;
            }
        }

        if(fast==NULL || fast->next==NULL)
        {
            return NULL;
        }

        ListNode *temp=head;
        while(temp!=slow)
        {
            temp=temp->next;
            slow=slow->next;
        }

        return temp;
        
    }
};

*/