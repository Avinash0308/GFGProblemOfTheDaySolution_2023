#include<bits/stdc++.h>
using namespace std;
long long int countStr(long long int n){
    //complete the function here
    if(n == 1) return 3;
    long long int ans = 1 + n + n;
    ans += ((n*(n-1))/2);
    ans += (n*(n-1));
    ans += ((n*(n-1)*(n-2))/2);
    return ans;
}