#include<bits/stdc++.h>
using namespace std;
class Solution
{
    long long int mod = 1e9+7;
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        vector<long long int> c_num = {1,1};
        for(long long int x = 2; x<=n; x++){
            long long int cur = 0;
            for(long long int i = 0; i<x/2; i++){
                cur = (cur + (c_num[i]*c_num[x-1-i])%mod)%mod;
            }
            cur = (cur*2)%mod;
            if(x%2) cur = (cur + (c_num[x/2]*c_num[x/2])%mod)%mod;
            c_num.push_back(cur);
        }
        return c_num.back();
    }
};
int main(){
    return 0;
}