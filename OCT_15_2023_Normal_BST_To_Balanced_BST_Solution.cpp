#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* left, *right;
};


class Solution{
    
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    void solve(Node* root, vector<int> &v){
        if(!root) return;
        solve(root->left,v);
        v.push_back(root->data);
        solve(root->right,v);
    }
    Node* tree(int low, int high, vector<int> &v){
        if(low>high) return NULL;
        int mid = (low+high)/2;
        Node* cur = new Node(v[mid]);
        cur->left = tree(low,mid-1,v);
        cur->right = tree(mid+1,high,v);
        return cur;
    }
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<int> v;
    	solve(root,v);
    	return tree(0,v.size()-1,v);
    }
};