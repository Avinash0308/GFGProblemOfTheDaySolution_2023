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

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       if(!root) return {};
       vector<int> ans;
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           ans.push_back(q.front()->data);
           int siz = q.size();
           for(int i = 0; i<siz; i++){
               Node* cur = q.front();
               q.pop();
               if(cur->right) q.push(cur->right);
               if(cur->left) q.push(cur->left);
           }
       }
       return ans;
    }
};