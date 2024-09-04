/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr=new ListNode(0);
        ListNode *head=curr;

        while(list1 && list2)
        {
          if(list1->val<list2->val)
          {
            head->next=new ListNode(list1->val);
            list1=list1->next;
            head=head->next;
          }else if(list1->val>list2->val)
          {
            head->next=new ListNode(list2->val);
            list2=list2->next;
            head=head->next; 
          }else {
            head->next=new ListNode(list1->val);
            list1=list1->next;
            head=head->next;

            head->next=new ListNode(list2->val);
            list2=list2->next;
            head=head->next;
          }
        }

        while(list1)
        {
          head->next=new ListNode(list1->val);
          list1=list1->next;
          head=head->next;
        }

        while(list2)
        {
          head->next=new ListNode(list2->val);
          list2=list2->next;
          head=head->next;
        }

        return curr->next;
    }
};


using the concept of traversal and at end check if any list is left or not
*/