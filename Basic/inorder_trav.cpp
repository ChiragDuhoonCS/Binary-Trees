
#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node (assuming standard structure)
struct Node { //! see this important
    int data;
    Node* left;
    Node* right;
};

void inorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    
    inorder(node->left);
    cout << node->data << " "; // Process the current node's data
    inorder(node->right);
}

int main() { //! see int main
    // Example: Create a root node or tree before calling inorder
   // Node* root = nullptr;
   
   // Example tree:
    //      1
    //     / \
    //    2   3
    //! here to set value in binary tree
    Node* root = new Node{1, nullptr, nullptr};
    root->left = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    
    
    inorder(root);
    return 0;
}