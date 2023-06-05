class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	void karo_na(Node* root, int &k, int &miny){
	    if(!root) return;
	    miny = min(miny,abs(k-root->data));
	    if(k >= root->data){
	        karo_na(root->right,k,miny);
	    }
	    if(k <= root->data){
	        karo_na(root->left,k,miny);
	    }
	}
    int minDiff(Node *root, int K)
    {
        //Your code here
        int miny = INT_MAX;
        karo_na(root,K,miny);
        return miny;
    }
};
