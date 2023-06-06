Cpp Easy Solution:

class Solution
{
    public:
    void solve(vector<Node*>&val,Node* root){
        if(root==NULL)return ;
        solve(val,root->left);
        val.push_back(root);
        solve(val,root->right);
    }
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        vector<Node*>val;
        solve(val,root);
        int i=0;
        int num=val.size();
        int f=0;
        int go=0;
        for(i=0;i<val.size();i++){
            if(key>val[i]->key)go++;
            if(i<num && key<=val[i]->key){
                f=1;
                break;
            }
        }
        if(go==0){
            suc=val[0];
        }
        else if(f==0){
            pre=val[i-1];
            suc=NULL;
        }
        else if(key==val[i]->key){
            if(i<num && val[i-1]!=NULL)pre=val[i-1];
            else pre=NULL;
            if(i+1<num && val[i+1]!=NULL)suc=val[i+1];
            else suc=NULL;
            
        }
        else{
            if(i<num && val[i]!=NULL)suc=val[i];
            else suc=NULL;
            if(i-1<num && val[i-1]!=NULL)pre=val[i-1];
            else pre=NULL;
        }
    }
}; 
