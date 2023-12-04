#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string com(string a, string b)
    {
        string ans;
        int i = a.size() - 1, j = b.size() - 1;
        int rem = 0;
        while (i >= 0 && j >= 0)
        {
            int cur = a[i] - '0' + b[j] - '0' + rem;
            ans.push_back(char(cur % 10 + 48));
            rem = cur / 10;
            i--;
            j--;
        }
        while (i >= 0)
        {
            int cur = a[i] - '0' + rem;
            ans.push_back(char(cur % 10 + 48));
            rem = cur / 10;
            i--;
        }
        while (j >= 0)
        {
            int cur = b[j] - '0' + rem;
            ans.push_back(char(cur % 10 + 48));
            rem = cur / 10;
            j--;
        }
        while (rem)
        {
            int cur = rem % 10;
            rem /= 10;
            ans.push_back(char(cur % 10 + 48));
        }
        while (ans.size() > 1 && ans[ans.size() - 1] == '0')
            ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int solve(string a, string b, int ind, string &s)
    {
        if (ind >= s.size())
            return 1;
        int limit = (a.size() == 0) + (b.size() == 0);
        string cur;
        if (a.size() == 0)
        {
            while (ind < s.size() - limit)
            {
                cur.push_back(s[ind]);
                if (solve(b, cur, ind + 1, s))
                    return 1;
                ind++;
            }
            return 0;
        }
        else
        {
            string add = com(a, b);
            if (add == "0")
            {
                if (s[ind] == '0')
                {
                    cur.push_back('0');
                    return solve(b, cur, ind + 1, s);
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                if (s.size() - ind >= add.size())
                {
                    for (int i = 0; i < add.size(); i++, ind++)
                    {
                        if (add[i] != s[ind])
                            return 0;
                    }
                    return solve(b, add, ind, s);
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    int isSumString(string S)
    {
        // code here
        if (S.size() <= 2)
            return 0;
        return solve("", "", 0, S);
    }
};