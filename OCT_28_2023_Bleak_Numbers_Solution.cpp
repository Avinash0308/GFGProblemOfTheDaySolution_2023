#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int is_bleak(int n)
	{
	    // Code here.
	    for(int i = n-1; i>0 && i>=n-31; i--){
	        int set = 0;
	        for(int j = 0; j<=31; j++){
	            if((i & (1<<j))) set++;
	        }
	        if(i + set == n) return 0; 
	    }
	    return 1;
	}
};