#include<bits/stdc++.h>
using namespace std;
class Solution
{

public:
    int xmod11(string x)
    {
       // code here
        if(x.size() == 1){
            return (int)x[0]-48;
        }
        int val = (x[0]-'0')*10 + x[1]-'0';
        for(int i = 2; i<x.size(); i++){
            val = (val%11)*10 + x[i]-'0';
        }
        return val%11;
    }
};
