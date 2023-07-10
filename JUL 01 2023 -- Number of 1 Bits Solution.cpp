class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int val = 1;
        int count = 0;
        for(int i = 0; i<32; i++){
            if(N & val<<i) count++;
        }
        return count;
    }
};
