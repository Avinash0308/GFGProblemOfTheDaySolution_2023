class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long int sum = 0;
        long long int n = N;
        for(long long int i = 0; i<N ; i++){
            sum += A[i];
        }
        int miny = INT_MAX;
        for(long long int i = 0; i<N ; i++){
            if(n*A[i] >= sum){
                miny = min(miny,A[i]);
            }
        }
        return miny;
    }
};
