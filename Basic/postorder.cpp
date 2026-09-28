#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node* left;
    int data;
    Node* right;
};

void postorder(Node* node) {
    if(node == nullptr){
         return;
        }
    
    postorder(node -> left);    
    postorder(node -> right);
    cout << node->data << " "; // Process the current node's data
    
}

int main() {
    Node* root = new Node{nullptr, 1, nullptr};
    root->left = new Node{nullptr, 2, nullptr};
    root->right = new Node{nullptr, 3, nullptr};

    root->left->right = new Node{nullptr, 5, nullptr};
    root->left->right->left = new Node{nullptr, 6, nullptr};
    root->left->left = new Node{nullptr, 4, nullptr};



    root->right->left = new Node{nullptr, 7, nullptr};
    root->right->right = new Node{nullptr, 8, nullptr};
    root->right->right->right = new Node{nullptr, 10, nullptr};
    root->right->right->left = new Node{nullptr, 9, nullptr};
    
    postorder(root);
    return 0;
}