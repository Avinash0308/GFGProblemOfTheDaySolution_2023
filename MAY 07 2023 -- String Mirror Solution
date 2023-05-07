class Solution{
public:
    string stringMirror(string str){
        // Code here
        string ans;
        ans.push_back(str[0]);
        for(int i = 1; i<str.size(); i++){
            if(str[i-1]-'0' > str[i]-'0'){
                ans += str[i];
            }
            else if(str[i-1] == str[i] && i == 1){
                break;
            }
            else if(str[i-1] == str[i]){
                ans += str[i];
            }
            else{
                break;
            }
        }
        string con = ans;
        reverse(ans.begin(),ans.end());
        con += ans;
        return con;
    }
};
