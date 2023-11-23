#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        vector<long long> v;
        v.push_back(1);
        long long mod = 1e9+7;
        for(int i = 2; i<=n; i++){
            vector<long long> cur;
            cur.push_back(1);
            for(int j = 1; j<v.size(); j++){
                cur.push_back((v[j] + v[j-1])%mod);
            }
            cur.push_back(1);
            v = cur;
        }
        return v;
    }
};