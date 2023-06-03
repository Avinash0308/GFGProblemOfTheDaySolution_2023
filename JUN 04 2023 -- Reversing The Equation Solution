class Solution
{
  public:
    string reverseEqn (string s)
    {
        int n = s.size();
        string opn;
        vector<string> num;
        for(int i = 0; i<n; i++){
            string val;
            val += s[i];
            while(i+1<n && s[i+1] >= '0' && s[i+1] <= '9'){
                val += s[i+1];
                i++;
            }
            if(i+1<n){opn += s[i+1]; i++;}
            num.push_back(val);
        }
        string ans;
        int i = num.size()-1 , j = opn.size()-1;
        while(i>=0){
            ans += num[i];
            i--;
            if(j>=0) {ans += opn[j]; j--;}
        }
        return ans;
    }
};
