class Solution{
    map<vector<int>,int> m;
public:
    void solve(Node* root, vector<int> &cur){
        if(!root) return;
        vector<int> v;
        for(int i = 0 ; i<root->children.size(); i++){
            solve(root->children[i],v);
        }
        v.push_back(root->data);
        m[v]++;
        cur.insert(cur.end(),v.begin(),v.end());
    }
    int duplicateSubtreeNaryTree(Node *root){
        vector<int> cur;
        solve(root,cur);
        int count = 0;
        for(auto i:m){
            if(i.second > 1) count++;
        }
        return count;
    }
};
