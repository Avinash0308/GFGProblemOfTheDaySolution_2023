#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool solve(Node* a, Node* b){
        if(!a && !b) return true;
        if(!a && b || !b && a) return false;
        if(a->data != b->data) return false;
        if(!solve(a->left,b->right) || !solve(b->left,a->right)) return false;
        return true;
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(!root) return true;
	    return solve(root->left,root->right);
    }
};
