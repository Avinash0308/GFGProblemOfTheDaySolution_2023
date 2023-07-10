class Solution{
public:
    void solve(Node* root, int &k , int &val , unordered_set<int> &s){
        if(!root) return;
        unordered_set<int> cur;
        solve(root->left,k,val,cur);
        solve(root->right,k,val,cur);
        cur.insert(root->data);
        if(cur.size()<=k) val++;
        s.insert(cur.begin(),cur.end());
    }
    int goodSubtrees(Node *root,int k){
        // Code here
        unordered_set<int> s;
        int val = 0;
        solve(root,k,val,s);
        return val;
    }
};
