vector<int> ans;
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    if(!root) return 0;
    if(root->data == node){
        if(ans.size() < k) return -1;
        else return ans[ans.size()-k];
    }
    ans.push_back(root->data);
    int s = kthAncestor(root->left,k,node);
    if(s == 0){
        s = kthAncestor(root->right,k,node);
    }
    ans.pop_back();
    return s;
}
