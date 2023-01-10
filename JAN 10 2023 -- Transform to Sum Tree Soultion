class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int traverse(Node * h){ // this is a basic tree traversing algorithm modified to return the sum of all the nodes associated with it.
        if(h!=NULL){ // if h has some value;
            int x = traverse(h->left); // firstly traverse to its left node;
            int y = traverse(h->right); // then to right node;
            int z = h->data; // storing the current value of h because it will get modified with new value i.e. sum of all the nodes below it;
            h->data = x+y; // changing h data to sum of node below it;
            return z+h->data; // returning the sum of all the nodes associated with parent node including the given node;
        }
        else{ // else return 0;
            return 0;
        }
    }
    void toSumTree(Node *node)
    {
        // Your code here
        int x = traverse(node); // we need not to return anything node is now modified;
    }
};
