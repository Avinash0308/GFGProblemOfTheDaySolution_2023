#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum = 0;
        for(long long i = 1; i<N && i*i<=N; i++){
            if(N%i) continue;
            sum += i;
            if(i != 1 && N/i != i)sum += N/i;
        }
        return sum==N;
    }
};