class Solution{
public:
    int s(Node * h){
        if(h == NULL) return 0;
        else if(h->left == NULL && h->right == NULL){
            return h->data;
        }
        else if(h->left == NULL && h->right){
            return h->data + s(h->right);
        }
        else if(h->left && h->right == NULL){
            return h->data + s(h->left);
        }
        else{
            return h->data + min(s(h->left),s(h->right));
        }
    }
    int traverse(int &sum , Node * h, int target){
        if(h == NULL) return -1;
        if(h->data == target){
            int data = s(h);
            return sum + h->data - data;
        }
        else if(h->data > target){
            sum += h->data;
            return traverse(sum,h->left,target);
        }
        else{
            sum += h->data;
            return traverse(sum,h->right,target);
        }
    }
    int maxDifferenceBST(Node *root,int target){
        int sum = 0;
        return traverse(sum,root,target);
    }
};
