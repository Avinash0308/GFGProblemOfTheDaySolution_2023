#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int find(int arr[], int start, int end, int x){
	    if(start > end) return 0;
	    while(start<=end){
	        int mid = (start+end)/2;
	        if(arr[mid] == x){
	            return 1 + find(arr,start,mid-1,x) + find(arr,mid+1,end,x);
	        }
	        else if(arr[mid] > x){
	            end = mid-1;
	        }
	        else{
	            start = mid+1;
	        }
	    }
	    return 0;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    return find(arr,0,n-1,x);
	}
};