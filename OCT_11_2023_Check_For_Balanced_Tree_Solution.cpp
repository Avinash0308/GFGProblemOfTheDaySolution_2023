#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int check(Node* root){
        if(!root) return 0;
        int left = check(root->left);
        int right = check(root->right);
        if(left == -1 || right == -1) return -1;
        if(abs(left-right) > 1) return -1;
        return max(left,right) + 1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int val = check(root);
        return val != -1;
    }
};