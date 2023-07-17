#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        // Code here
        int n = A.size();
        vector<int> ind(26);
        vector<int> count(26);
        string ans;
        for (int i = 0; i < n; i++)
        {
            count[A[i] - 'a']++;
            ind[A[i] - 'a'] = i;
            int lowest = n;
            for (int i = 0; i < 26; i++)
            {
                if (count[i] == 1)
                {
                    lowest = min(lowest, ind[i]);
                }
            }
            if (lowest == n)
            {
                ans.push_back('#');
            }
            else
            {
                ans.push_back(A[lowest]);
            }
        }
        return ans;
    }
};