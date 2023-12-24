#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>> v(n);
        for(int i = 0; i<n; i++){
            v[i] = {price[i],(i+1)*price[i]};
        }
        sort(v.begin(),v.end());
        int count = 0;
        for(int i = 0; i<n; i++){
            int d = k/v[i].first;
            int x = v[i].second/v[i].first;
            count += min(d,x);
            k -= min(d,x)*v[i].first;
        }
        return count;
    }
};