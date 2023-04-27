class Solution{
public:
    vector<char> easyTask(int n,string s,int q,vector<vector<string>> &queries){
        // Code here
        vector<char> ans;
        for(int i = 0; i<q; i++){
            if(queries[i][0] == "1"){
                int ind = stoi(queries[i][1]);
                s[ind] = queries[i][2][0];
            }
            else{
                vector<int> v(26);
                string a = queries[i][1] , b = queries[i][2] , c = queries[i][3];
                int start = stoi(a);
                int end = stoi(b);
                int val = stoi(c);
                for(int j = start; j<=end; j++){
                    v[s[j]-'a']++;
                }
                int cur = 0;
                for(int j = 25 ; j>=0; j--){
                    cur += v[j];
                    if(cur >= val){
                        ans.push_back(char(j+97));
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
