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
    
    postorder(root);
    return 0;
}