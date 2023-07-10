class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        long long ans = 0; // ans will store the sum upto i th element;
        vector<long long> v; // vector to store the GeekNum at each index;
        for(int i = 0; i<K ; i++){ // firstly we will traverse the given array to find its sum and will also copy all of its element to v;
            v.push_back(GeekNum[i]);
            ans += GeekNum[i];
        }
        for(long long i = K; i<N ; i++){ // this array will iterate till the nth index;
            //GeekNum is sum of previous K element;
            // as ans is storing sum of previous K element , it is the GeekNum for current index;
            v.push_back(ans); // storing the GeekNum of current index in v;
            ans += v[i]; // now to find next GeekNum we will firstly add current index GeekNum to ans;
            ans -= v[i-K]; // and will subtract Kth index from current index from ans;
        }
        return v[N-1]; // return the last index of v or the required index;
    }
};
