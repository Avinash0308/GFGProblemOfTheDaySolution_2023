class Solution{
public:
    long long int sum = 0 , flag = 0;
    void traverse2(Node * h , int x){
        if(h){
            
        if(x == 0){
            sum += h->data;
        }
        traverse2(h->right,x+1);
        traverse2(h->left,x-1);
        }
    }
    void traverse(Node * h,int target){
        if(h){
            if(h->data == target){
                flag = 1;
                traverse2(h->left,-1);
                traverse2(h->right,1);
            }
            else if(h->data < target){
                traverse(h->right ,target);
            }
            else{
                traverse(h->left,target);
            }
        }
    }
    long long int verticallyDownBST(Node *root,int target){
        traverse(root,target);
        if(flag == 0) return -1;
        return sum;
    }
};
