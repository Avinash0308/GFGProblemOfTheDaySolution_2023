#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long ans = 0, cur = 0;
        int start = 0;
        for(int i = 0; i<N; i++){
            cur += Arr[i];
            if(i-start + 1 > K){
                cur -= Arr[start];
                start++;
            }
            if(i - start + 1 == K) ans = max(ans,cur);
        }
        return ans;
    }
};