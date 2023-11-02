#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int c = -1, b = -1, ans = INT_MAX;
        for(int i = 0; i<n; i++){
            if(a[i] == x) c = i;
            if(a[i] == y) b = i;
            if(c != -1 && b != -1) ans = min(ans,abs(c-b));
        }
        return (ans == INT_MAX)?-1:ans;
    }
};
