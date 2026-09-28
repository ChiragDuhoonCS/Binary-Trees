#include<bits/stdc++.h>
using namespace std;

void inorder(node) {
    if(node == null)
      return;
    
      inorder(node -> left);
      inorder(node -> data);
      inorder(node -> right);

}
int main() {
    inorder(node);
    cout << "HERE" << endl << inorder << endl;
    retrun 0;
}

#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node (assuming standard structure)
struct Node {
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

int main() {
    // Example: Create a root node or tree before calling inorder
    Node* root = nullptr; 
    // root = new Node{1, nullptr, nullptr}; // Example initialization
    
    inorder(root);
    return 0;
}