#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        reverse(str.begin(),str.end());
        return str;
    }
};