#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    string printMinNumberForPattern(string S){
        int n = S.size();
        string ans="";
        
        int noOfDBeforeFirstI=0;
        int i=0;
        while(S[i]=='D'){
            noOfDBeforeFirstI++;
            i++;
        }
        
        ans.push_back(to_string(noOfDBeforeFirstI+1)[0]);
        
        for(int i=0;i<n;i++){
            if(S[i]=='I' and S[i+1]=='D'){
                int j=i+1;
                int count=0;
                while(j<n and S[j]=='D'){
                    j++;
                    count++;
                }
                while(count>=0){
                    ans.push_back(to_string(i+2+count)[0]);
                    count--;
                }
                i=j-1;
            }
            else if(S[i]=='I'){
                ans.push_back(to_string(i+2)[0]);
            }
            else if(S[i]=='D'){
                ans.push_back(to_string((ans[ans.size()-1]-'0')-1)[0]);
            }
        }
        
        return ans;
    }
};