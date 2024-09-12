/*class Solution {
public:

pair<int,int>diameter(TreeNode *root)
{
  if(root==NULL)
  {
    pair<int,int>p=make_pair(0,0);
    return p;
  }

  pair<int,int>left=diameter(root->left);
  pair<int,int>right=diameter(root->right);

  int check1=left.first;
  int check2=right.first;

  int check3=left.second+right.second+1;

  pair<int,int>ans;
  ans.first=max(check1,max(check2,check3));
  ans.second=max(left.second,right.second)+1;

  return ans;
}
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).first-1;
    }
};

in short comparing the heights of both subtrees and solving
*/