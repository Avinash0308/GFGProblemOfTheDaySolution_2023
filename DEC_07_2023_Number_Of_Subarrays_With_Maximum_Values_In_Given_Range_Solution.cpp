#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long int start = i;
            long long int tot = 0;
            long long int last = i - 1;
            while (i < n && a[i] <= R)
            {
                if (a[i] < L)
                {
                    tot += (i - last);
                }
                else
                {
                    last = i;
                }
                i++;
            }
            ans += ((((i - start) * (i - start + 1)) / 2) - tot);
        }
        return ans;
    }
};