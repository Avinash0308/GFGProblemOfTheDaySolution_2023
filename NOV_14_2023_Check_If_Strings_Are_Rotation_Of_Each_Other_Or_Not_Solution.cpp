#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size() != s2.size()) return false;
        if(s1 == s2) return true;
        int n = s1.size();
        for(int i = 0; i<n; i++){
            char c = s1[0];
            s1.erase(0,1);
            s1.push_back(c);
            if(s1 == s2) return true;
        }
        return false;
    }
};