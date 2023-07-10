class Solution{
    int ans = 0;
  public:
    /*You are required to complete this method*/
    void solve(Node* root, int cur){
        if(!root) return ;
        ans = max(ans,cur);
        solve(root->left,cur+1);
        solve(root->right,cur+1);
    }
    int maxDepth(Node *root) {
        // Your code here
        solve(root,1);
        return ans;
    }
};
