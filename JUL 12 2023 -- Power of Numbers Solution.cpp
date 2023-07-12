#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       long long mod = 1e9+7;
       if(R == 0) return 1;
       long long cur = N;
       long long ind = 1;
       while(ind*2 <= R){
           cur = (cur*cur)%mod;
           ind*=2;
       }
       return (cur * power(N,R-ind))%mod;
    }

};