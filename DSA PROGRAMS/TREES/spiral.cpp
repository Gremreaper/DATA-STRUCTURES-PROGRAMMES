#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
}; // Missing semicolon added here

vector<vector<int>> spiralform(TreeNode* root) {
    if (!root) return {};
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root); // Initialize queue with root node
    bool flag = false;

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();

            level.push_back(node->val); // Corrected member access from data to val

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        if (flag) {
            reverse(level.begin(), level.end());
        }

        ans.push_back(level);
        flag = !flag;
    }

    return ans;
}

void print(vector<vector<int>>& ans) {
    for (auto& a : ans) {
        for (int i : a) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<int>> res = spiralform(root);
    print(res);

    return 0;
}
 