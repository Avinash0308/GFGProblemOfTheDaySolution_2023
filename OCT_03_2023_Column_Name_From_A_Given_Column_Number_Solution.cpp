#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string colName (long long int n)
    {
        string ans = "";
        while(n>0){
            char c = char((n-1)%26 + 65);
            ans.push_back(c);
            n = (n-1)/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};