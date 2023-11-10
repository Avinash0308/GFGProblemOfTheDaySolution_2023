#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.size() != str2.size()) return false;
        int n = str1.size();
        unordered_map<char,char> m;
        unordered_map<char,char> m2;
        for(int i = 0; i<n; i++){
            if(m2.find(str2[i]) != m2.end() && m2[str2[i]] != str1[i]) return false;
            if((m.find(str1[i]) == m.end())){
                m[str1[i]] = str2[i];
                m2[str2[i]] = str1[i];
            }
            else{
                if(m[str1[i]] != str2[i]) return false;
            }
        }
        return true;
    }
};