class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        vector<string> ans;
        for(int i = 0; i<N; i++){
            string cur;
            for(auto ch : Dictionary[i]){
                if((int)ch >= 65 && (int)ch <= 90){
                    cur.push_back(ch);
                }
                if(cur.size() == Pattern.size()){
                    break;
                }
            }
            if(cur == Pattern){
                ans.push_back(Dictionary[i]);
            }
        }
        if(ans.empty()){
            ans.push_back("-1");
            return ans;
        }
        return ans;
    }
};
