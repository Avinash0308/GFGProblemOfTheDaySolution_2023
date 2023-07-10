class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        priority_queue<int> p;
        for(int i = 0; i<N; i++){
            p.push(A[i]);
        }
        long long ans = 0;
        while(K--){
            int val = p.top();
            p.pop();
            ans += val;
            val/=2;
            p.push(val);
        }
        return ans;
    }
};
