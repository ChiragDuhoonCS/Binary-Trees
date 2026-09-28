#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left; // see we use struct
    struct node *right;

    node(int value){
       data = value;
       left = right = nullptr;
        
    }

};

int main() {
    struct node *root = new node(1);
    root -> left = new node(22);
    root -> left -> right = new node(23); // always start with root
    root -> left -> right -> left = new node(50);
    root -> left -> right -> left -> right = new node(18);
    root -> left -> right -> left -> right -> right = new node(78);

    return 0;
}