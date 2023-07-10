class Solution{
    public:
    bool wifiRange(int n, string s, int x){
        // code here
        int range = -1;
        for(int i = 0; i<n ; i++){
            if(s[i] == '1') range = i+x;
            else{
                if(i<=range) s[i] = '-';
            }
        }
        range = n;
        for(int i= n-1; i>=0; i--){
            if(s[i] == '1') range = i-x;
            else{
                if(i>= range) s[i] = '-';
            }
        }
        for(int i = 0; i<n ; i++){
            if(s[i] == '0') return false;
        }
        return true;
    }
};
