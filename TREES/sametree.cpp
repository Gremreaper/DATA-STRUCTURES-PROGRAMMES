/*
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        {
          return true;
        }  

        if(p==NULL && q!=NULL || p!=NULL && q==NULL)
        {
          return false;
        }

        bool check1=p->val==q->val;
        bool check2=isSameTree(p->left,q->left);
        bool check3=isSameTree(p->right,q->right);

        if(check1 && check2 && check3)
        {
          return true;
        }else{
          return false;
        }
    }
};
*/