class Solution {
    public:
    long long findMaxSubsetSum(int N, vector<int> &A) {
        vector<int> v(N);
        v[N-1] = A[N-1];
        for(int i = N-2; i>=0; i--){
            v[i] = max(v[i+1] , (i+2<N)?v[i+2]:0) + A[i];
        }
        return max(v[0],v[1]);
    }
};
