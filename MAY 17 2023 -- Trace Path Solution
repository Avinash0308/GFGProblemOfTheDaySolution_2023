class Solution{
public:
    int isPossible(int n, int m, string s){
        int a = 1 , b = 1;
        int l = 1, r = 1, u = 1, d = 1;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'L'){
                b--;
                l = min(l,b);
            }
            else if(s[i] == 'R'){
                b++;
                r = max(r,b);
            }
            else if(s[i] == 'U'){
                a++;
                u = max(u,a);
            }
            else{
                a--;
                d = min(d,a);
            }
        }
        if(u-d + 1 <= n && r-l+1 <= m){
            return 1;
        }
        else return 0;
    }
};
