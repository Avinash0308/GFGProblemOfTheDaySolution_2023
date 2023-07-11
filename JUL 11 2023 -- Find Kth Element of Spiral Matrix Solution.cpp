#include<bits/stdc++.h>
using namespace std;
#define MAX = 1000;
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int ind = 0;
 		int tot = 0;
 		while(tot < k){
 		    int row = n - (ind*2) - 1;
     		int col = m - (ind*2) - 1;
     		if(tot + col >= k){
     		    return a[ind][ind+k-tot-1];
     		}
     		tot+=col;
     		if(tot + row >= k){
     		    return a[ind+k-tot-1][m-ind-1];
     		}
     		tot+=row;
     		if(tot + col >= k){
     		    return a[n-ind-1][m-ind-1-(k-tot-1)];
     		}
     		tot+=col;
     		if(tot + row >= k){
     		    return a[n-ind-1-(k-tot-1)][ind];
     		}
     		tot+=row;
 		    ind++;
 		}
 		return 0;
    }
};