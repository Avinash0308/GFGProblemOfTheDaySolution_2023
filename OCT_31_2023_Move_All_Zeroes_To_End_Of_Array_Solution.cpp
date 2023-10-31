#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int ind = 0, count = 0;
	    for(int i = 0; i<n; i++){
	        if(arr[i]){
	            arr[ind] = arr[i];
	            ind++;
	        }
	    }
	    while(ind<n)arr[ind++] = 0;
	}
};