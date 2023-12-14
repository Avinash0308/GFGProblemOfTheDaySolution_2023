#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long countWays(int n, int k){
        // code here
         long long ans=1;
        long long prev=1, mod = 1e9+7;
        for(int i=1;i<n;i++){
            long long temp=(k-1)*ans;
            ans=(prev+temp)%mod;
            prev=temp;
        }
        return (ans*k)%mod;
    }
};