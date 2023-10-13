#include<bits/stdc++.h>
using namespace std;
class Solution{

public:
    int ans = -1;
    int floor(Node* root, int x) {
        // Code here
        if(!root) return INT_MIN;
        floor(root->left,x);
        floor(root->right,x);
        if(x >= root->data) ans = max(ans,root->data);
        return ans;
    }
};