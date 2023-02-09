class Solution{
public:
    int maxInstance(string s){
        vector<int> m(26); // this vector will store the character count to write word "BALLOON";
        m['b' - 'a'] = 1; // Balloon contains 1 b;
        m['a' - 'a'] = 1; // 1 a;
        m['l' - 'a'] = 2; // 2 l;
        m['o' - 'a'] = 2; // 2 o;
        m['n' - 'a'] = 1; // 1 n;
        vector<int> v(26); // this vector will store the character count of string given;
        for(int i = 0; i<s.size(); i++){
            v[s[i]-'a']++;
        }
        int val = INT_MAX; // simple ideology is to find the alphabet in word BALLOON which is restricting to create BALLOON max no. of times;
        // In layman terms , the character which is present in least ration to required will be our answer;
        for(int i = 0; i<26; i++){ // running loop for all characters;
            if(m[i]){ // if current index is an alphabet of word BALLOON;
                val = min(val,(v[i]/m[i])); // val will get updated with min of current val and ration of present alphabet to required;
            }
        }
        return val; // return the value obtained;
    }
};
