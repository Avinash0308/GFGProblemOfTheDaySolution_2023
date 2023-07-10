class Solution{
    int N;
  public:
    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        N = size;
        int i = 0;
        return build(pre, preMirror, i);
    }
    
    Node *build(int pre[], int preMirror[], int &i){
        if(i == N) //all the nodes have been added
            return nullptr;
            
        Node *root = new Node(pre[i]);
        
        int pos; //position of the current node in preMirror[]
        for(int j=0; j<N; j++){
            if(pre[i] == preMirror[j]){
                preMirror[j] = -1; //mark it as already taken
                pos = j;
            }
        }
        
        i++; //move the pointer of pre[]
        
        
        //check if any node is still remaining after the current node in preMirror[]
        //current node will have children iff something is still remaining on its right
        for(int j=pos+1; j<N; j++)
            if(preMirror[j] != -1){
                root->left  = build(pre, preMirror, i);
                root->right = build(pre, preMirror, i);
                break;
            }
        
        return root;
    }
};
