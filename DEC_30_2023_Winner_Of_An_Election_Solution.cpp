#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    string lexi(string &a, string b){
        if(a == b) return a;
        int n = a.size(), m = b.size();
        for(int i =0,  j = 0; i<n && j<m; j++,i++){
            if(a[i] > b[j]) return b;
            else if(b[j] > a[i]) return a;
        }
        if(n < m) return a;
        else return b;
    }
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int> m;
        for(int it = 0; it<n; it++){
            m[arr[it]]++;
        }
        int maxy = 0;
        string ans;
        for(auto it:m){
            if(it.second > maxy){
                maxy = it.second;
                ans = it.first;
            }
            else if(it.second == maxy){
                ans = lexi(ans,it.first);
            }
        }
        string votes = to_string(maxy);
        return {ans,votes};
    }
};