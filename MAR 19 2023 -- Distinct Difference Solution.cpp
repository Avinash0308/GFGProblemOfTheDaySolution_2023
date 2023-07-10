class Solution {
  public:
    vector<int> getDistinctDifference(int n, vector<int> &A) {
        // code here
        unordered_map<int,int> m;
        vector<int> ans(n);
        for(int i = 0; i<n ;i++){
            ans[i] = m.size();
            m[A[i]]++;
        }
        m.clear();
        for(int i = n-1; i>=0; i--){
            ans[i] -= m.size();
            m[A[i]]++;
        }
        return ans;
    }
};
