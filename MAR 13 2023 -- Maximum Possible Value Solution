class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        int count = 0;
        long long ans = 0;
        int last = INT_MAX;
        for(int i = 0; i<N; i++){
            if(B[i] >= 2){
                count++;
                ans += (A[i] * 2);
                B[i] -= 2;
                if(A[i] < last){
                    last = A[i];
                }
            }
            int sq = B[i]/4;
            B[i]-=(sq*4);
            ans += (A[i] * sq * 4);
            if(B[i] >= 2){
                count++;
                ans += (A[i] * 2);
            }
        }
        if(count %2) ans -= last*2;
        return ans;
    }
};
