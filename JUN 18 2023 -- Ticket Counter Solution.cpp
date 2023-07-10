class Solution {
  public:
    int distributeTicket(int N, int k) {
        // code here
        int low = 1, high = N;
        while(low<=high){
            if(low+k-1 < high){
                low += k;
            }
            else return high;
            if(high-k+1 > low){
                high-=k;
            }
            else return low;
        }
        return low;
    }
};
