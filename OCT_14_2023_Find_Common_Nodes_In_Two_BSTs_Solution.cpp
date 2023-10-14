#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    void array(Node* h, vector<int> &ans){
        if(!h) return;
        array(h->left,ans);
        ans.push_back(h->data);
        array(h->right,ans);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
        vector<int> a, b;
        array(root1,a);
        array(root2,b);
        int i = 0, j = 0;
        vector<int> ans;
        int n = a.size(), m = b.size();
        while(i<n && j<m){
            if(a[i] == b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i] > b[j]) j++;
            else i++;
        }
        return ans;
    }
};