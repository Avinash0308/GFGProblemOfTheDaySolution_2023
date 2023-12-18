class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        // code here
        if(N%2 == 0) return 0;
        int xo = 0;
        for(int i = 0; i<N; i+=2){
            xo ^= A[i];
        }
        return xo;
    }
};
