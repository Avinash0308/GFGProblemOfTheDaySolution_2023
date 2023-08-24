#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       int n = s1.size(), m = s2.size();
       vector<int> mul(n+m+1);
       for(int i = n-1; i>=0; i--){
           if(s1[i] == '-') continue;
           int cur = n-i-1;
           for(int j = m-1; j>=0; j--,cur++){
               if(s2[j] == '-') continue;
               int val = (s1[i] - '0') * (s2[j] - '0') + mul[cur];
               mul[cur] = val%10;
               mul[cur+1] = mul[cur+1] + val/10;
           }
       }
       string ans;
       for(int i = 0; i<n+m; i++){
            mul[i+1] += mul[i]/10;
            mul[i] %= 10;
            ans.push_back(char(mul[i] + 48));
       }
       ans.push_back(char(mul[n+m] + 48));
       int ind = n+m;
       while(ind>0 && ans[ind] == '0'){
           ans.pop_back();
           ind--;
       }
       if(ind == 0 && ans[ind] == '0') return ans;
       int neg = (s1[0] == '-') + (s2[0] == '-');
       if(neg%2) ans.push_back('-');
       reverse(ans.begin(),ans.end());
       return ans;
    }

};