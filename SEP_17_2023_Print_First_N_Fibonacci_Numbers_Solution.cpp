#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        if(n == 1) return {1};
        long long a = 0, b = 1;
        vector<long long> v(n);
        v[0] = 1;
        for(int i = 1; i<n; i++){
            long long cur = a + b;
            a = b; 
            b = cur;
            v[i] = cur;
        }
        return v;
    }
};