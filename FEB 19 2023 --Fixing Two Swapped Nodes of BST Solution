class Solution {
  public:
    void travers(struct Node * h , int a , int b){
        if(h!=NULL){
            if(h->data == a){
                h->data = b;
            }
            else if(h->data == b){
                h->data = a;
            }
            travers(h->left , a , b);
            travers(h->right, a , b);
        }
    }
    void traverse(struct Node * h , vector<int> &v){
        if(h!=NULL){
            traverse(h->left,v);
            v.push_back(h->data);
            traverse(h->right,v);
        }
    }
    struct Node *correctBST(struct Node *root) {
        vector<int> v;
        traverse(root,v);
        int a = -1 , b = -1;
        for(int i = 0; i<v.size()-1; i++){
            if(v[i]>v[i+1]){
                int j = i+2;
                while(j<v.size() && v[j] > v[i+1]){
                    j++;
                }
                if(j == v.size()){
                    a = v[i];
                    b = v[i+1];
                }
                else{
                    a = v[i];
                    b = v[j];
                }
                break;
            }
        }
            travers(root,a,b);
        
        return root;
    }
};
