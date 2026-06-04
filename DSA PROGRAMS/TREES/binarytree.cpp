#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* buildTree(Node* root) {
    cout << "Enter the data for node (-1 for NULL): ";
    int data;
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    root = new Node(data);

    cout << "Enter the data to insert at left of " << data << ": " << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data to insert at right of " << data << ": " << endl;
    root->right = buildTree(root->right);

    return root;
}

void printTree(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    Node* root = buildTree(nullptr);
    cout << "Pre-order Traversal of the tree:" << endl;
    printTree(root);
    cout << endl;

    return 0;
}
