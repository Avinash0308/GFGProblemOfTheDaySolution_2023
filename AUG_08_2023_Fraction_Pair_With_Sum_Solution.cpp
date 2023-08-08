#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        vector<float> v(n);
        for(int i = 0; i<n; i++){
            v[i] = (float)numerator[i]/denominator[i];
        }
        sort(v.begin(),v.end());
        int i = 0, j =n-1;
        int ans = 0;
        while(i<j){
            if(v[i] + v[j] == 1){
                int count = 1, c = 1;
                while(i+1<j && v[i+1] == v[i]){
                    i++;
                    count++;
                }
                while(j-1>i && v[j-1] == v[j]){
                    j--;
                    c++;
                }
                if(v[i] == v[j]){
                    count += c;
                    ans += (count*(count-1))/2;
                }
               else { 
                ans += count*c;}
                i++;
                j--;
            }
            else if(v[i]+v[j] > 1.0){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};