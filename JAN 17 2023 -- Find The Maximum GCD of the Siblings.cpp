class Solution
{
public:
    int max_g = -1; // initialising max_g with value -1 , it will store the max gcd obtained;
    int val = 0; // val is initialised with 0 because we need to reutrn 0 is no pair is found;
    void find(Node * root){
        if(root != NULL){ // code will execute if root is not null;
            // we will traverse the tree to check for each possible case;
            find(root->left); // calling function with left of root;
            find(root->right);// with right of node;
            if(root->left != NULL && root->right != NULL){ // code will not execute if either of node is null;
                int g = __gcd(root->left->data,root->right->data); // using inbuilt stl to find gcd of left and right sibling of current node;
                if(g>max_g){ // if gcd obtained is greater than the previous one;
                    max_g = g; // we will overload the max_g with current g;
                    val = root->data; // and the val will be updated with current node data;
                }
            }
        }
        
    }
    int maxGCD( Node* root)
    {
        if(root == NULL) return -1; // as quoted in problem we need to return -1 if root is null;
        find(root); // calling find function to find the node with max gcd of siblings;
        return val; // returning the node found;
    }
};
