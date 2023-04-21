class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        int count = 0;
        unordered_map<string,int> m;
        for(int i = 0; i<s1.size();i++){
            for(int j = 0; j<s1[i].size();j ++){
                string s = s1[i].substr(0,j+1);
                m[s] = 1;
                s = s1[i].substr(s1[i].size()-1-j,j+1);
                m[s] = 1;
            }
            
        }
        for(int i = 0; i<s2.size(); i++){
            if(m.find(s2[i]) != m.end()) count++;
        }
        return count;
    }
};
