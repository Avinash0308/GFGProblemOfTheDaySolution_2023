#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.size() != str2.size()) return false;
        int n = str1.size();
        bool a = true, b= true;
        for(int i = 0; i<n-2; i++){
            if(str1[i] != str2[i+2]) a = false;
            if(str1[i+2] != str2[i]) b = false;
        }
        if(a){
            if(str1[n-2]  == str2[0]  && str1[n-1] == str2[1]) return true;
        }
        if(b){
            if(str1[0] == str2[n-2] && str1[1] == str2[n-1]) return true;
        }
        return false;
    }

};