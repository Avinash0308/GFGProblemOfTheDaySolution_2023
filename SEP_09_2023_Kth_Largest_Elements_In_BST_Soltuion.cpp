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
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
    int ans = -1;
    void solve(Node* root, int K, int &ind){
        if(!root) return;
        solve(root->right,K,ind);
        if(ind == K) ans = root->data;
        ind++;
        solve(root->left,K,ind);
    }
    int kthLargest(Node *root, int K)
    {
        int ind = 1;
        solve(root,K,ind);
        return ans;
    }
};