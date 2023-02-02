class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        stack<pair<int,int>> s; // it will contain the value and index of all elements of which greater element in yet not found;
        vector<long long> ans(n,-1); // vector to be returned;
        for(int i = 0; i<n ; i++){ // iterating from 0th index;
            while(!s.empty() && s.top().first < arr[i]){ // we will pop the top of stack while top of stack is smaller than current element;
                ans[s.top().second] = arr[i]; // replaicing the value of top index element with current element;
                s.pop();// popping the modified element from the stack;
            }
            s.push({arr[i],i}); // at last push the current element with index in stack;
        }
        return ans; // returning the array formed;
    }
};
