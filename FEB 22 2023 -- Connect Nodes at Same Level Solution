class Solution{
    public:
    void doit(vector<Node*> v){
        vector<Node*> cur;
        for(int i =0; i<v.size(); i++){
            if(v[i]->left != NULL) cur.push_back(v[i]->left);
            if(v[i]->right != NULL) cur.push_back(v[i]->right);
            if(i<v.size()-1){
                v[i]->nextRight = v[i+1];
            }
        }
        if(cur.size() != 0){
            doit(cur);
        }
    }
    void connect(Node *root)
    {
       // Code Here
       vector<Node *> v;
       if(root!=NULL){
           v.push_back(root);
       }
       doit(v);
    }    
};
