#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;

    node(int value) {
        data = value;
        left = right = nullptr; // if no data for left or right (end node) it will take null 'nullptr'
    }
};

int main() {
    //! Creating a Binary Search Tree with 5 nodes, starting from your root (1)
    struct node *root = new node(1);  //@Create a new node with value 1 in memory
    root->right = new node(3);
    root->right->left = new node(2);
    root->right->right = new node(4);
    root->right->right->right = new node(5);

    return 0;
}