#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    if(n%k) return 0;
	    string sample = s.substr(0,k);
	    int pos = 1;
	    for(int i = k; i<n; i+=k){
	        string cur = s.substr(i,k);
	        if(cur != sample){
	            pos--;
	        }
	    }
	    if(pos >= 0) return 1;
	    pos = 1;
	    sample =  s.substr(n-k,k);
	    for(int i = n-k-k; i>=0; i-=k){
	        string cur = s.substr(i,k);
	        if(sample != cur) pos--;
	    }
	    if(pos >= 0) return 1;
	    else return 0;
	}
};