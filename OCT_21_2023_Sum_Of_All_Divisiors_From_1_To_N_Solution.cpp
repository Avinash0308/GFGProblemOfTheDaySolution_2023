#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long ans = 0;
        for(int i = 1; i<=N; i++){
            ans += (N/i)*i;
        }
        return ans;
    }
};