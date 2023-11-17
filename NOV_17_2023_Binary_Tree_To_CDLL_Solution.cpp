#include<bits/stdc++.h>
using namespace std;
/*Complete the function below
Node is as follows:*/
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

class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    pair<Node*,Node*> solve(Node* root){
        if(!root) return {NULL,NULL};
        pair<Node*,Node*> l = solve(root->left);
        pair<Node*,Node*> r = solve(root->right);
        Node* left_most;
        Node* right_most;
        if(l.first != NULL){
            left_most = l.first;
            l.second->right = root;
            root->left = l.second;
        }
        else{
            left_most = root;
            root->left = NULL;
        }
        if(r.second != NULL){
            right_most = r.second;
            root->right = r.first;
            r.first->left = root;
        }
        else{
            right_most = root;
            root->right = NULL;
        }
        return {left_most,right_most};
        
    }
    Node *bTreeToCList(Node *root)
    {
        pair<Node*,Node*> p = solve(root);
        if(p.first){
            p.first->left = p.second;
            p.second->right = p.first;
        }
        return p.first;
    }
};
int main(){
    return 0;
}