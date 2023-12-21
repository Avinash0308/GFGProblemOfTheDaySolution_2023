#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minCandy(int N, vector<int> &ratings)
    {
        // code here
        vector<int> v(N, 1);
        vector<int> x(N, 1);
        for (int i = 1; i < N; i++)
        {
            if (ratings[i] > ratings[i - 1])
                v[i] = v[i - 1] + 1;
        }

        for (int i = N - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
                x[i] = x[i + 1] + 1;
        }
        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            ans += max(v[i], x[i]);
        }
        return ans;
    }
};