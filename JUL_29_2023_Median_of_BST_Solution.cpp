
/*
Structure of the binary Search Tree is as
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
// your task is to complete the Function
// Function should return median of the BST
void solve(struct Node* root, vector<int> &ans){
    if(!root) return;
    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
}
float findMedian(struct Node *root)
{
      //Code here
      vector<int> ans;
      solve(root,ans);
      if(ans.size() == 0) return 0;
      float val = ans[ans.size()/2];
      if(ans.size()%2 == 0){
          val = (val + ans[(ans.size()/2 )- 1])/2;
      }
      return val;
}

