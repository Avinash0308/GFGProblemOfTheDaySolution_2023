#include<bits/stdc++.h>
using namespace std;
class Solution{
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    int j = 0, maxy = 1e3 + 7;
	    for(int i = 0; i<n; i+=2){
	        int val = arr[j++]%maxy;
	        arr[i] += (val*maxy);
	    }
	    j = n-1;
	    for(int i = n-1; i>=0; i-=2){
	        int val = arr[j--]%maxy;
	        arr[i] += val*maxy;
	    }
	    for(int i = 0; i<n; i++){
	        arr[i]/=maxy;
	    }
	}
		 

};