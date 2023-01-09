class Solution {
  public:
    int solve(int N, vector<int> A) {
        // code here
        int i = N-1; // as the marvel is added in the last bowl ,we will start the iteration from last bowl;
        while(A[i] == 9){ // it will until the value is equal to 9 because we need to carry the marvels only when this bowl is full with max cap , i.e. 9;
            i--;
        }
        return i+1; // returning the index in 1 based indexing;
    }
};
