/*
For a general node

class Solution {
public:
    void deleteNode(ListNode* node) {
         node->val=node->next->val;
         node->next=node->next->next;
    }

     void deleteNode(int position,Node *&head)
     {
        if(position==1)
        {
            //delete first node
            Node *temp=head; 
            head=head->next;
            temp->next=NULL;
            delete(temp);


        }else{
            //delete any middle node

            Node *del=head;
            Node *prev=NULL;

            int cnt=1;
            while(cnt<position)
            {
                prev=del;
                del=del->next;
                cnt++;
            }

            //now we have one position behind and del one

            prev->next=del->next;
            delete(del);
        }
     }
};
*/