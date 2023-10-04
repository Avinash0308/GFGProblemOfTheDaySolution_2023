#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        stack<int> s;
        int n = str.size();
        int sum = 0;
        unordered_map<char,int> m;
        m['I'] = 1, m['V'] = 5, m['X'] = 10, m['L'] = 50, m['C'] = 100, m['D'] = 500, m['M'] = 1000;
        for(int i = 0; i<n; i++){
            int cur = m[str[i]];
            while(!s.empty() && s.top() < cur){
                cur -= s.top();
                s.pop();
            }
            s.push(cur);
            
        }
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};