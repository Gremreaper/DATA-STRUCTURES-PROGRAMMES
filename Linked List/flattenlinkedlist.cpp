/*usage of next and bottom pointers for traversing

class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        priority_queue<int,vector<int>,greater<int>>pq;
        Node *curr=root;
        while(curr)
        {
            Node *prev=curr;
            pq.push(prev->data);
            while(prev->bottom)
            {
                prev=prev->bottom;
                pq.push(prev->data);
            }
            
            curr=curr->next;
        }
        
        Node *ans=new Node(-1);
        Node *trav=ans;
        while(!pq.empty())
        {
            trav->bottom=new Node(pq.top());
            pq.pop();
            trav=trav->bottom;
        }
        
        return ans->bottom;
    }
};
*/