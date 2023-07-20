#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n = S.size();
       vector<int> v(26,n);
       for(int i = 0; i<n; i++){
           if(v[S[i]-'a'] == n){
               v[S[i]-'a'] = i;
           }
           else{
               v[S[i]-'a'] = -1;
           }
       }
       int smallest = n;
       for(int i = 0 ;i<26; i++){
           if(v[i]!=-1){
               smallest = min(smallest,v[i]);
           }
       }
       return (smallest == n)?'$':S[smallest];
    }

};