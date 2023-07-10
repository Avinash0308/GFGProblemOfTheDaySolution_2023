class Solution{
  public:
    /*You are required to complete below method */
    void solve(int &maxy , queue<Node*> q){
        if(q.size()){
            int sum = 0;
            int n = q.size();
            for(int i = 0; i<n; i++){
                sum += q.front()->data;
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                q.pop();
            }
            maxy = max(maxy,sum);
            solve(maxy,q);
        }
    }
    int maxLevelSum(Node* root) {
        // Your code here
        int maxy = INT_MIN;
        queue<Node*> q;
        if(root) q.push(root);
        solve(maxy,q);
        return maxy;
    }
};
