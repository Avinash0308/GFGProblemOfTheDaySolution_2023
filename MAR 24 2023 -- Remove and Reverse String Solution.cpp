class Solution {
  public:
    string removeReverse(string S) {
        vector<int> v(26);
        int count = 0;
        for(int i =0 ; i<S.size(); i++){
            v[S[i]-'a']++;
        }
        int i = 0 , j = S.size()-1;
        while(i<=j){
            while(i<=j && v[S[i]-'a'] == 1){
                i++;
            }
            if(i > j){
                break;
            }
            else{
                v[S[i]-'a']--;
                S[i] = '-';
                i++;
                count++;
            }
            while(i<=j && v[S[j]-'a'] == 1){
                j--;
            }
            if(i>j)break;
            else{
                v[S[j]-'a']--;
                S[j] = '-';
                j--;
                count++;
            }
        }
        string ans;
        for(int i = 0; i<S.size(); i++){
            if(S[i] != '-'){
                ans.push_back(S[i]);
            }
        }
        if(count%2) reverse(ans.begin(),ans.end());
        return ans;
    }
};
