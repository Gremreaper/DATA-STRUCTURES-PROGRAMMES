/*
vector<int> leftView(Node *root)
{
   vector<int>ans;
   queue<Node*>q;
   q.push(root);
   
   while(!q.empty())
   {
       int size=q.size();
       Node *r=q.front();
       ans.push_back(r->data);
       while(size--)
       {
           Node *r=q.front();
           q.pop();
           if(r->left)
           {
               q.push(r->left);
           }
           
           if(r->right)
           {
               q.push(r->right);
           }
       }
   }
   return ans;
}
*/