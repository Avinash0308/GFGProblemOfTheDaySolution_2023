#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        for(int i = 0; i<n; i++){
            arr[arr[i]%n] += n;
        }
        vector<int> ans;
        for(int i = 0; i<n; i++){
            if(arr[i]/n > 1) ans.push_back(i);
        }
        if(ans.empty()) return {-1};
        else return ans;
    }
};