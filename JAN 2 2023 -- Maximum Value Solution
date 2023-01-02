class Solution {
  public:
    vector<int> maximumValue(Node* node) {
        //code here
        vector<int> ans; // Initializing a vector that will store the answer array;
        queue<Node*> q;  // This queue will store the nodes at each level;
        q.push(node);    // Manually inserting the first node to make sure queue not reamins empty;
        while(!q.empty()){
            int n = q.size();  // storing the size of queue for given level;
            int max = 0;       // As it is stated that max > 0 so initializing min with value 0;
            for(int i = 0; i<n  ; i++){     // This loop will ensure that the values of only current level will be checked and the new nodes will be cheked in another round;
                if(q.front()->data > max){
                    max = q.front()->data;   // If value of current node is greater than the current value of max , make max value greater;
                }
                if(q.front()->left != NULL)q.push(q.front()->left);   // Nodes will only be pushed if they are not NULL;
                if(q.front()->right != NULL)q.push(q.front()->right);
                q.pop();
            }
            ans.push_back(max);    // pushing the greatest value found in current level in the ans;
        }
        return ans;   // returning the answer vector;
    }
};
