class Solution{
    //Complete the function and return minimum number of operations
    public:
    int specialPalindrome(string s1, string s2){
        //Code Here
        int miny = INT_MAX;
        int n = s1.size();
        int m = s2.size();
        int j = 0;
        while(j<=n-m){
            int i = j;
            string cur;
            cur = s1;
            int change = 0;
            while(i-j < m){
                if(cur[i] != s2[i-j]){
                    cur[i] = s2[i-j];
                    change++;
                }
                i++;
            }
            bool t = true;
            for(int k = 0; k<n/2 && t; k++){
                if(cur[k] != cur[n-k-1]){
                    if(k >= j && k<i && n-k-1 >= j && n-k-1 < i){
                        t = false;
                    }
                    else{
                        change++;
                    }
                }
            }
            if(t){
                miny = min(miny,change);
            }
            j++;
        }
        if(miny == INT_MAX) return -1;
        else return miny;
    }
};
