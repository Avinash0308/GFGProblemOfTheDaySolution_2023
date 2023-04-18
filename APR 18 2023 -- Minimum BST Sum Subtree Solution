class Solution {
public:
    bool is(Node * h , int &prev , int &sum , int &count){
        if(!h) return true;
        if(!is(h->left,prev,sum,count)) return false;
        if(prev >= h->data) return false;
        sum += h->data;
        count++;
        prev = h->data;
        return is(h->right,prev,sum,count);
    }
    void solve(int &target, Node * h , int &miny){
        if(!h) return;
        int sum = 0 , count = 0 , prev = -1;
        if(is(h,prev,sum,count)){
            if(sum == target) miny = min(miny,count);
        }
        solve(target,h->left,miny);
        solve(target,h->right,miny);
    }
    int minSubtreeSumBST(int target, Node *root) {
        int maxy = INT_MAX;
        int count = 0;
        solve(target,root,maxy);
        return (maxy == INT_MAX)?-1:maxy;
    }
};
